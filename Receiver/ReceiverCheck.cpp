#include "../Receiver/ReceiverCheck.h"
using namespace std;

CSVReader reader("Testdata/dataset.csv");

vector<float> CSVReader::temperatureFetch()
{
  vector<float> data1;
  
  ifstream file(fileName);
  string line = "";
  string temperature = "";
  
  getline(file,line);
  while(getline(file,line))
  {
    stringstream str(line);
    
    getline(str,temperature,',');
    
    data1.push_back(stof(temperature));
    
  }
  return data1;
}
  
vector<float> CSVReader::humidityFetch()
{
  vector<float> data2;
  ifstream file(fileName);
  string line = "";
  string humidity = "";
  
  getline(file,line);
  while(getline(file,line))
  {
    stringstream str(line);
    
    getline(str,humidity,',');
    getline(str,humidity,',');
    
    data2.push_back(stof(humidity));
  }
  return data2;
}

vector<float> humidity = reader.humidityFetch();

vector<float> temperature = reader.temperatureFetch();

ReceiverClass checker;

void ReceiverClass::temperatureWarningLow(vector<float> temperature)
{
  for(float temp:temperature)
  {
   checker.TempLow(temp);
  }  
}

void ReceiverClass::TempLow(float temp)
{
   if(temp <= 4 && temp > 0)
    {
      cout << "Warning: Current temperature is " << temp << " C" << endl;
      checker.option = 1;  
    }
}
  
  
void ReceiverClass::temperatureWarningHigh(vector<float> temperature)
{
  for(float temp:temperature)
  {
    checker.TempHigh(temp);
  }
}

void ReceiverClass::TempHigh(float temp)
{
  if(temp >= 37 && temp < 40)
    {
      cout << "Warning: Current temperature is " << temp << " C" << endl;
      checker.option = 1;
    }
}

void ReceiverClass::temperatureErrorLow(vector<float> temperature)
{
  for(float temp:temperature)
  {
    if(temp <= 0)
    {
      cout << "Error: Current temperature is " << temp << " C" << endl;
      checker.option = 2;
    }
  }
}

void ReceiverClass::temperatureErrorHigh(vector<float> temperature)
{
  for(float temp:temperature)
  {
    if(temp >= 40)
    {
      cout << "Error: Current temperature is " << temp << " C" << endl;
      checker.option = 2;
    }
  }
}
       
void ReceiverClass::humidityWarning(vector<float> humidity)
{
  for(float hum:humidity)
  {
    checker.HumidHigh(hum);
  }
}

void ReceiverClass::HumidHigh(float hum)
{
  if(hum >= 70 && hum < 90)
    {
      cout<< "Warning: Current Humidity is " << hum << " %" << endl;
      checker.option = 3;
    }
}
       
void ReceiverClass::humidityError(vector<float> humidity)
{
  for(float hum:humidity)
  {
    if(hum >= 90)
    {
      cout<< "Error: Current Humidity is " << hum << " %" << endl;
      checker.option = 4;
    }
  }
}

int main()
{
  CSVReader reader2;
   ReceiverClass receiverObj;
vector<float> data1 = reader2.temperatureFetch();
  vector<float> data2 = reader2.humidityFetch();
  
  if(data.size()!= 0)
  {
    receiverObj.temperatureWarningLow(temperature);
    receiverObj.humidityError(humidity);
    receiverObj.temperatureWarningHigh(temperature);
     receiverObj.temperatureErrorHigh(temperature);
      receiverObj.temperatureErrorLow(temperature);
      receiverObj.humidityWarning(humidity);
  }
  else
  {
    cout<<"No data received"<<endl;
  }
  return 0;
}
