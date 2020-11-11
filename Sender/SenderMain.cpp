#include "../Sender/SenderCheck.h"
#include<iostream>
#include<vector>
#include<string>

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
        cout << endl;
    }
    
    return 0;
 }
