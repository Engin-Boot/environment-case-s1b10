#include "../Receiver/ReceiverCheck.h"
using namespace std;


int option = 0;

void ReceiverClass::dataFetch()
{
  
  ReceiverClass obj;
  string line = "";
  string temperature = "";
  string humidity = "";
  
  while(getline(cin,line))
  {
    stringstream str(line);
    
    getline(str,temperature,',');
    getline(str,humidity,',');
    
    obj.temperatureWarningLow(stof(temperature));
    obj.temperatureWarningHigh(stof(temperature));
    obj.temperatureErrorLow(stof(temperature));
    obj.temperatureErrorHigh(stof(temperature));
    obj.humidityWarning(stof(humidity));
    obj.humidityError(stof(humidity));
  }
  
}
  

ReceiverClass checker;


void ReceiverClass::temperatureWarningLow(float temperature)
{
  
   checker.TempLow(temperature);
    
}

void ReceiverClass::TempLow(float temp)
{
   if(temp <= 4 && temp > 0)
    {
      cout << "Warning: Current temperature is " << temp << " C" << endl;
      option = 1;  
    }
}
  
  
void ReceiverClass::temperatureWarningHigh(float temperature)
{
  
    checker.TempHigh(temperature);
  
}

void ReceiverClass::TempHigh(float temp)
{
  if(temp >= 37 && temp < 40)
    {
      cout << "Warning: Current temperature is " << temp << " C" << endl;
      option = 1;
    }
}

void ReceiverClass::temperatureErrorLow(float temperature)
{
  
    if(temperature <= 0)
    {
      cout << "Error: Current temperature is " << temperature << " C" << endl;
      option = 2;
    }
  
}

void ReceiverClass::temperatureErrorHigh(float temperature)
{
  
    if(temperature >= 40)
    {
      cout << "Error: Current temperature is " << temperature << " C" << endl;
      option = 2;
    }
  
}
       
void ReceiverClass::humidityWarning(float humidity)
{
  
    checker.HumidHigh(humidity);
  
}

void ReceiverClass::HumidHigh(float hum)
{
  if(hum >= 70 && hum < 90)
    {
      cout<< "Warning: Current Humidity is " << hum << " %" << endl;
      option = 3;
    }
}
       
void ReceiverClass::humidityError(float humidity)
{
  
    if(humidity >= 90)
    {
      cout<< "Error: Current Humidity is " << humidity << " %" << endl;
      option = 4;
    }
  
}

