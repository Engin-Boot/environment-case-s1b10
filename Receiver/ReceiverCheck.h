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
     void temperatureWarning(vector<float>);
     void temperatureError(vector<float>);
     void humidityWarning(vector<float>);
     void humidityError(vector<float>);
};
