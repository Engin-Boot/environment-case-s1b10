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
  string line = "";
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

vector<float> humidity = reader.humidityFetch();

vector<float> temperature = reader.temperatureFetch();

bool temperatureWarning(vector<float> temperature)
{
  for(float temp:temperature)
  {
    if((temp >= 37 && temp < 40)||(temp <= 4 && temp > 0))
    {
      cout << "Warning: Current temperature is " << temp << " C" << endl;
      return true;
    }
    return false;
  }
}

bool temperatureError(vector<float> temperature)
{
  for(float temp:temperature)
  {
    if((temp >= 40 || temp <= 0)
    {
      cout << "Error: Current temperature is " << temp << " C" << endl;
      return true;
    }
    return false;
  }
}
       
bool humidityWarning(vector<float> humidity)
{
  for(float hum:humidity)
  {
    if(hum >= 70 && hum < 90)
    {
      cout<< "Warning: Current Humidity is " << hum << " %" << endl;
      return true;
    }
    return false;
  }
}
       
bool humidityError(vector<float> humidity)
{
  for(float hum:humidity)
  {
    if(hum >= 90)
    {
      cout<< "Error: Current Humidity is " << hum << " %" << endl;
      return true;
    }
    return false;
  }
}
