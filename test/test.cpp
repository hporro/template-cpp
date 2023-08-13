#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>

#include "templateProject.h"

TEST_CASE("Test A struct", "[ta]")
{
    TemplateProject::A a;
    REQUIRE(a.give2() == 2);
}

TEST_CASE("Benchmark Fibonacci", "[!benchmark]")
{
    REQUIRE(TemplateProject::fibonacci(5) == 5);

    REQUIRE(TemplateProject::fibonacci(20) == 6'765);
    BENCHMARK("fibonacci 20")
    {
        return TemplateProject::fibonacci(20);
    };

    REQUIRE(TemplateProject::fibonacci(25) == 75'025);
    BENCHMARK("fibonacci 25")
    {
        return TemplateProject::fibonacci(25);
    };
}
