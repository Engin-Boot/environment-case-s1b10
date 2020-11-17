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


void setCondition(vector<string> row)
{
    for(string data : row)
    {
	
	if(data == "")
	{
	   setfilename = "The CSV file has empty fields";
	}
	
    }
}	   

void CSVReader::extractRow(vector<vector<string> > dataList)
{
    
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

        istringstream str(line);

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

