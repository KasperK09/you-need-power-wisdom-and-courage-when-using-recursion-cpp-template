#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("TriangleNumberCalculator::value") 
{
    TriangleNumberCalculator calc;

    SECTION("Base cases")
    {
        REQUIRE(calc.value(0) == 0);
        REQUIRE(calc.value(1) == 1);
    }

    SECTION("check if triangular numbers calculation works")
    {
        REQUIRE(calc.value(1) == 1);
        REQUIRE(calc.value(2) == 3);
        REQUIRE(calc.value(3) == 6);
        REQUIRE(calc.value(4) == 10);
        REQUIRE(calc.value(5) == 15);
    }
}

TEST_CASE("check if TriangleNumberCalculator add works")
{
    TriangleNumberCalculator calc;

    REQUIRE(calc.add(1, 1) == 2);
    REQUIRE(calc.add(2, 3) == 9);
    REQUIRE(calc.add(4, 2) == 13);
}

TEST_CASE("check if TriangleNumberCalculator subtract works")
{
    TriangleNumberCalculator calc;

    REQUIRE(calc.subtract(1, 1) == 0);
    REQUIRE(calc.subtract(2, 3) == -3);
    REQUIRE(calc.subtract(4, 2) == 7);
}

TEST_CASE("check if TriangleNumberCalculator multiply works")
{
    TriangleNumberCalculator calc;

    REQUIRE(calc.multiply(1, 1) == 1);
    REQUIRE(calc.multiply(2, 3) == 18);
    REQUIRE(calc.multiply(4, 2) == 30);
}

TEST_CASE("check if TriangleNumberCalculator divide works")
{
    TriangleNumberCalculator calc;

    REQUIRE(calc.divide(1, 1) == 1);
    REQUIRE(calc.divide(2, 3) == 0);
    REQUIRE(calc.divide(4, 2) == 3);
    REQUIRE(calc.divide(4, 0) == 0);

}

