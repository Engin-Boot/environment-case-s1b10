#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
using namespace std;

class ReceiverClass
{
public:
     int option = 0;
     void temperatureWarningLow(vector<float> temperature);
     void temperatureWarningHigh(vector<float> temperature);
     void temperatureErrorLow(vector<float> temperature);
     void temperatureErrorHigh(vector<float> temperature);
     void humidityWarning(vector<float> humidity);
     void humidityError(vector<float> humidity);
     void TempLow(float temp);
     void TempHigh(float temp);
     void HumidHigh(float hum);
     pair<vector<float>,vector<float>> dataFetch();
};
