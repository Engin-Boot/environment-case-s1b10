#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
#include "SenderCheck.h"

/*std::vector<std::vector<std::string> > CSVReader::getData()
{
    std::ifstream file(fileName);
    std::vector<std::vector<std::string> > dataList;
    std::string line = "";
    
    while (getline(file, line))
    {

        std::stringstream str(line);

         std::string data = "";

        std::vector<std::string> vec;

        while (getline(str, data, ','))

        {

            vec.push_back(data);

        }
        dataList.push_back(vec);
    }
    file.close();
    return dataList;
}*/

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

int main()
{
    
    CSVReader reader("Testdata/dataset.csv");
    
    //std::vector<std::vector<std::string> > dataList = reader.getData();
    
    /*for(std::vector<std::string> vec : dataList)
    {
        for(std::string data : vec)
        {
            std::cout<<data << " , ";
        }
        std::cout<<std::endl;
    }*/
    
    vector<float> temperature = reader.temperatureFetch();
    vector<float> humidity = reader.humidityFetch();
    
    return 0;
}
