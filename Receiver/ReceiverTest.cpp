#define CATCH_CONFIG_MAIN

#include<vector>
#include "catch.hpp"
#include "ReceiverCheck.h"
using namespace std;

ReceiverClass obj;
CSVReader reader("Testdata/dataset.csv");
vector<float> temperature = reader.temperatureFetch();
vector<float> humidity = reader.humidityFetch();

TEST_CASE("Generate warning if Temperature >= 37 C or if Temperature <= 4 C")
{
  bool warningcheck = obj.temperatureWarning(temperature);
  
  REQUIRE(warningcheck == true);
}

TEST_CASE("Generate error if Temperature >= 40 C or if Temperature <= 0 C")
{
  bool errorcheck = obj.temperatureError(temperature);
  
  REQUIRE(errorcheck == true);
}

TEST_CASE("Generate warning if Humidity >= 70%")
{
  bool warningcheck = obj.humidityWarning(humidity);
  
  REQUIRE(warningcheck == true);
}

TEST_CASE("Generate error if Humidity >= 90%")
{
  bool errorcheck = obj.humidityError(humidity);
  
  REQUIRE(warningcheck == true);
}
