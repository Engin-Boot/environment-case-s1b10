#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
using namespace std;

extern int option = 0;

class ReceiverClass
{
public:
     
     void temperatureWarningLow(float temperature);
     void temperatureWarningHigh(float temperature);
     void temperatureErrorLow(float temperature);
     void temperatureErrorHigh(float temperature);
     void humidityWarning(float humidity);
     void humidityError(float humidity);
     void TempLow(float temp);
     void TempHigh(float temp);
     void HumidHigh(float hum);
     //pair<vector<float>,vector<float>> dataFetch();
     void dataFetch();
};
