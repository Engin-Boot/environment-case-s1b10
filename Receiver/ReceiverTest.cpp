#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "ReceiverCheck.h"
using namespace std;

TEST_CASE("Generate warning if Temperature >= 37 C or if Temperature <= 4 C")
{
  ReceiverClass obj;
  bool warningcheck = obj.temperatureWarning();
  
  REQUIRE(warningcheck == true);
}

TEST_CASE("Generate error if Temperature >= 40 C or if Temperature <= 0 C")
{
  ReceiverClass obj;
  bool errorcheck = obj.temperatureError();
  
  REQUIRE(errorcheck == true);
}

TEST_CASE("Generate warning if Humidity >= 70%")
{
  ReceiverClass obj;
  bool warningcheck = obj.humidityWarning();
  
  REQUIRE(warningcheck == true);
}

TEST_CASE("Generate error if Humidity >= 90%")
{
  ReceiverClass obj;
  bool errorcheck = obj.humidityError();
  
  REQUIRE(warningcheck == true);
}
