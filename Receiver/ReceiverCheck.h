#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

class CSVReader
{
public:
     string fileName;
     vector<float> temperatureFetch();
     vector<float> humidityFetch();
     explicit CSVReader(const string& filename): fileName(filename) { }
};

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
};
