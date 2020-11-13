#define CATCH_CONFIG_MAIN
#include <iostream>
#include<vector>
#include "../Receiver/ReceiverCheck.h"
#include "../catch.hpp"
using namespace std;


ReceiverClass obj;
//obj.temperatureWarningLow(3.7);
//auto res = obj.dataFetch();

//vector<float> temperature = res.first;
//vector<float> humidity = res.second;

//vector<float> temperature = {10,20,30,40,50,60,2};
//vector<float> humidity = {80,90,30,40,97,60};

TEST_CASE("Generate warning if Temperature >= 37 C or if Temperature <= 4 C")
{
  
  /*obj.temperatureWarningLow(temperature);
  obj.temperatureWarningHigh(temperature);
  //REQUIRE(obj.temperatureWarningLow(temperature) == ("Alert generated"));
  REQUIRE(obj.option == 1);*/
  
  obj.temperatureWarningHigh(38.9);
  //obj.temperatureWarningLow(3.7);
  
  REQUIRE(option == 1);
  
  obj.temperatureWarningLow(3.7);
  REQUIRE(option == 1);
}

TEST_CASE("Generate error if Temperature >= 40 C or if Temperature <= 0 C")
{
  obj.temperatureErrorLow(-5);
  REQUIRE(option == 2);
  
  obj.temperatureErrorHigh(48.6);
  REQUIRE(option == 2);
}

TEST_CASE("Generate warning if Humidity >= 70%")
{
  obj.humidityWarning(85.2);
  
  REQUIRE(option == 3);
}

TEST_CASE("Generate error if Humidity >= 90%")
{
  obj.humidityError(94.8);
  
  REQUIRE(option == 4);
}
