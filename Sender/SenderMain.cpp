#include "../Sender/SenderCheck.h"
#include<iostream>
#include<vector>
#include<string>
//string setfilename;

int main()
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
        //cout << endl;
    }
    
    reader.extractRow(dataList);
    
    if(setfilename == "The CSV file has empty fields" || setfilename == "The CSV file has invalid data")
        cout << setfilename << endl;
    
    else
        reader.printData(dataList);
        
   /* for(vector<string> vec : dataList)
    {
        for(string data : vec)
        {
            cout << stof(data) << " , ";
        }
        cout << endl;
    }*/
    
    return 0;
 }
