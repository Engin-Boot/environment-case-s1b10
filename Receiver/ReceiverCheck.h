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
     CSVReader(string filename): fileName(filename) { }
};

class ReceiverClass
{
public:
     bool temperatureWarning(vector<float>);
     bool temperatureError(vector<float>);
     bool humidityWarning(vector<float>);
     bool humidityError(vector<float>);
};
