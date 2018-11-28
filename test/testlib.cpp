#include "testlib.h"

#include <cassert>
#include <exception>
#include <iostream>
#include <string>


const bool ENABLE_COLORS = true;

const char CODE_RED[] = "\033[91m";
const char CODE_GREEN[] = "\033[92m";
const char CODE_RESET[] = "\033[0m";


static std::string colored(const char* code, const char* text)
{
    if (ENABLE_COLORS)
    {
        return std::string(code) + text + CODE_RESET;
    }
    else
    {
        return std::string(text);
    }
}

void testlib_report_success(TestContext* test_context)
{
    test_context->m_check_count += 1;
}

void testlib_report_fail(TestContext* test_context, const char* description)
{
    test_context->m_check_count += 1;
    test_context->m_error_count += 1;

    std::cout
        << colored(CODE_RED, "[ERROR]") << " " << description
        << std::endl;
}

void testlib_run_test(const char* name, void (*test_function)(TestContext*))
{
    TestContext test_context
    {
        .m_error_count = 0,
        .m_check_count = 0
    };

    try
    {
        (*test_function)(&test_context);
        testlib_report_success(&test_context); // no exception was thrown
    }
    catch (const std::exception& e)
    {
        testlib_report_fail(&test_context, e.what());
    }
    catch (...)
    {
        testlib_report_fail(&test_context, "Unknown uncaught exception");
    }

    if (test_context.m_error_count == 0)
    {
        std::cout
            << colored(CODE_GREEN, "[OK]") << " " << name
            << " (passed " << test_context.m_check_count << " checks)"
            << std::endl;
    }
    else
    {
        std::cout
            << colored(CODE_RED, "[FAIL]") << " " << name
            << " (failed " << test_context.m_error_count
            << " out of " << test_context.m_check_count << " checks)"
            << std::endl;
    }
}
