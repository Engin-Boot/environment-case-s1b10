#include "ReceiverCheck.h"

using namespace std;

CSVReader reader("Testdata/dataset.csv");

vector<float> CSVReader::temperatureFetch()
{
  vector<float> data;
  ifstream file(fileName);
  string line = "";
  string temperature = "";
  
  while(getline(file,line))
  {
    stringstream str(line);
    
    getline(str,temperature,',');
    
    data.push_back(stof(temperature));
  }
  return data;
}
  
vector<float> CSVReader::humidityFetch()
{
  vector<float> data;
  ifstream file(fileName);
  str line = "";
  string humidity = "";
  
  while(getline(file,line))
  {
    stringstream str(line);
    
    getline(str,humidity,',');
    getline(str,humidity,',');
    
    data.push_back(stof(humidity));
  }
  return data;
}
