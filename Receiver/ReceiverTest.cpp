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
  obj.temperatureWarning(temperature);
  
  REQUIRE(obj.option == 1);
}

TEST_CASE("Generate error if Temperature >= 40 C or if Temperature <= 0 C")
{
  obj.temperatureError(temperature);
  
  REQUIRE(obj.option == 2);
}

TEST_CASE("Generate warning if Humidity >= 70%")
{
  obj.humidityWarning(humidity);
  
  REQUIRE(obj.option == 3);
}

TEST_CASE("Generate error if Humidity >= 90%")
{
  obj.humidityError(humidity);
  
  REQUIRE(obj.option == 4);
}
 
