#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
#include "SenderCheck.h"
using namespace std;
vector<vector<string> > CSVReader::getData()
{
    ifstream file(fileName);
    vector<vector<string> > dataList;
    string line = "";
    
    getline(file,line);
    while (getline(file, line))
    {

        stringstream str(line);

        string data = "";

        vector<string> vec;

        while (getline(str, data, ','))

        {

            vec.push_back(data);

        }
        dataList.push_back(vec);
    }
    file.close();
    return dataList;
}

/*vector<float> CSVReader::temperatureFetch()
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
}*/

int main()
{
    
    CSVReader reader("Testdata/dataset.csv");
    
    vector<vector<string> > dataList = reader.getData();
    
    for(vector<string> vec : dataList)
    {
        for(string data : vec)
        {
            cout << data << " , ";
        }
        cout << endl;
    }
    
  /*  vector<float> temperature = reader.temperatureFetch();
    vector<float> humidity = reader.humidityFetch();
    
    for(float t1 : temperature && float h1 : humidity)
    {
        cout << t1 << " , " << h1 << endl;
    }
    
    vector<float> result;
    
    result.reserve( temperature.size() + humidity.size() );
    result.insert( result.end(), temperature.begin(), temperature.end() );
    result.insert( result.end(), humidity.begin(), humidity.end() );
    
    for(float i : result)
    {
        cout << i << endl ;
    }*/
    
    return 0;
}
