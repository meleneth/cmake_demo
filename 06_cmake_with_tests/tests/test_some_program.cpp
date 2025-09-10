#include <catch2/catch_test_macros.hpp>
#include <sstream>

#include "secondary.hpp"

TEST_CASE("some_program secondary_foo")
{
  secondary_foo();

  REQUIRE(1 == 1);
}

