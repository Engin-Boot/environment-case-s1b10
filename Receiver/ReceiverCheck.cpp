#include "../Receiver/ReceiverCheck.h"
using namespace std;

//CSVReader reader("Testdata/dataset.csv");

//pair<vector<float>,vector<float>> ReceiverClass::dataFetch()
void ReceiverClass::dataFetch()
{
  //vector<float> data1;
  //vector<float> data2;
  
  //ifstream file(fileName);
  ReceiverClass obj;
  string line = "";
  string temperature = "";
  string humidity = "";
  
  while(getline(cin,line))
  {
    stringstream str(line);
    
    getline(str,temperature,',');
    getline(str,humidity,',');
    
    //data1.push_back(stof(temperature));
    //data2.push_back(stof(humidity));
    obj.temperatureWarningLow(stof(temperature));
    obj.temperatureWarningHigh(stof(temperature));
    obj.temperatureErrorLow(stof(temperature));
    obj.temperatureErrorHigh(stof(temperature));
    obj.humidityWarning(stof(humidity));
    obj.humidityError(stof(humidity));
  }
  //return {data1,data2};
}
  
/*vector<float> ReceiverClass::humidityFetch()
{
  vector<float> data2;
  //ifstream file(fileName);
  string line = "";
  string humidity = "";
  
  while(getline(cin,line))
  {
    stringstream str(line);
    
    getline(str,humidity,',');
    getline(str,humidity,',');
    
    data2.push_back(stof(humidity));
  }
  return data2;
}*/

/*bool CheckData(vector<float> value)
{
    bool isDataReceived = getline(cin, value).good();
    return isDataReceived;
}*/
ReceiverClass checker;

//auto res = checker.dataFetch();

//vector<float> temperature = res.first;
//vector<float> humidity = res.second;

void ReceiverClass::temperatureWarningLow(float temperature)
{
  //for(float temp:temperature)
  //{
   checker.TempLow(temperature);
  //}  
}

void ReceiverClass::TempLow(float temp)
{
   if(temp <= 4 && temp > 0)
    {
      cout << "Warning: Current temperature is " << temp << " C" << endl;
      checker.option = 1;  
    }
}
  
  
void ReceiverClass::temperatureWarningHigh(float temperature)
{
  //for(float temp:temperature)
  //{
    checker.TempHigh(temperature);
  //}
}

void ReceiverClass::TempHigh(float temp)
{
  if(temp >= 37 && temp < 40)
    {
      cout << "Warning: Current temperature is " << temp << " C" << endl;
      checker.option = 1;
    }
}

void ReceiverClass::temperatureErrorLow(float temperature)
{
  //for(float temp:temperature)
  //{
    if(temperature <= 0)
    {
      cout << "Error: Current temperature is " << temperature << " C" << endl;
      checker.option = 2;
    }
  //}
}

void ReceiverClass::temperatureErrorHigh(float temperature)
{
  //for(float temp:temperature)
  //{
    if(temperature >= 40)
    {
      cout << "Error: Current temperature is " << temperature << " C" << endl;
      checker.option = 2;
    }
  //}
}
       
void ReceiverClass::humidityWarning(float humidity)
{
  //for(float hum:humidity)
  //{
    checker.HumidHigh(humidity);
  //}
}

void ReceiverClass::HumidHigh(float hum)
{
  if(hum >= 70 && hum < 90)
    {
      cout<< "Warning: Current Humidity is " << hum << " %" << endl;
      checker.option = 3;
    }
}
       
void ReceiverClass::humidityError(float humidity)
{
  //for(float hum:humidity)
  //{
    if(humidity >= 90)
    {
      cout<< "Error: Current Humidity is " << humidity << " %" << endl;
      checker.option = 4;
    }
  //}
}

int main()
{
  ReceiverClass receiverObj;
  receiverObj.dataFetch();
  //vector<float> data1 = receiverObj.temperatureFetch();
  //vector<float> data2 = receiverObj.humidityFetch();
  
  /*for(float i : temperature)
    cout << i << " ";
  
  cout << endl;
  
  for(float j : humidity)
    cout << j << " ";
  
  cout << endl;*/
  
  /*if(temperature.size()!= 0)
  {
    receiverObj.temperatureWarningLow(temperature);
    receiverObj.temperatureWarningHigh(temperature);
    receiverObj.temperatureErrorHigh(temperature);
    receiverObj.temperatureErrorLow(temperature);
      
  }
  else
  {
    cout<<"No data received"<<endl;
  }
 
  if(humidity.size()!= 0)
  {
    receiverObj.humidityWarning(humidity);
    receiverObj.humidityError(humidity);
  }
    
  else
  {
    cout<<"No data received"<<endl;
  }
  return 0;*/
}
