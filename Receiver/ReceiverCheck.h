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
     vector<float> temperatureFetch();
     vector<float> humidityFetch();
};

class ReceiverClass
{
public:
     bool temperatureWarning();
     bool temperatureError();
     bool humidityWarning();
     bool humidityError();
};
