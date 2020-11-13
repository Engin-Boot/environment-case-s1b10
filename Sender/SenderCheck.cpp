#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
#include<cctype>
#include "SenderCheck.h"
using namespace std;
CSVReader readerobj;
string setfilename;

void CSVReader::printData(vector<vector<string> > dataList)
{
     for(vector<string> vec : dataList)
     {
        for(string data : vec)
        {
            cout << stof(data) << " , ";
        }
        cout << endl;
     }
}

bool checkValidity(string data)
{
   for(unsigned int i = 0; i < data.length(); i++)
	{
		if ((isdigit((data[i])) == 0) && (data[i] != '-') && (data[i] != '\n'))
			return false;
	}	
	return true; 
}

void setCondition(vector<string> row)
{
    for(string data : row)
    {
	cout << data << "value" << endl;
	cout << "result: " << isdigit('2') <<endl;
	if(data == "")
	{
	   setfilename = "The CSV file has empty fields";
	   //cout << "1st if" << endl;
	}
	if(!checkValidity(data))
	{
	   setfilename = "The CSV file has invalid data";
	   cout << "2nd if" << endl;
	}
    }
}	   

void CSVReader::extractRow(vector<vector<string> > dataList)
{
    //cout << dataList << endl;
    for(vector<string> vec : dataList)
    {
	setCondition(vec);
    }
}

vector<vector<string> > CSVReader::getData(string filename)
{
    setfilename = filename;
    ifstream file(filename);
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
            
          /*  if(data == "")
            {
                setfilename = "The CSV file has empty fields";
                exit(-1);
            }
            
            else if(!checkValidity(data))
            {
                setfilename = "The CSV file has invalid data";
                exit(-2);
            }
            
            else
            {*/
                vec.push_back(data);
            //}
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


/*int main()
{
    
    //CSVReader reader("Testdata/dataset.csv");
    CSVReader reader;
    vector<vector<string> > dataList = reader.getData("Testdata/dataset.csv");
    
    for(vector<string> vec : dataList)
    {
        for(string data : vec)
        {
            cout << stof(data) << " , ";
        }
        cout << endl;
    }*/
    
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
    
   // return 0;
//}
