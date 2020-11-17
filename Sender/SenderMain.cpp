#include "../Sender/SenderCheck.h"
#include<iostream>
#include<vector>
#include<string>

int main()
{
    
    CSVReader reader;
    vector<vector<string> > dataList = reader.getData("Testdata/dataset.csv");
    
        
    reader.extractRow(dataList);
    
   
    if(setfilename == "The CSV file has empty fields")
        cout << setfilename << endl;

    else
        reader.printData(dataList);
        
    
    return 0;
 }
