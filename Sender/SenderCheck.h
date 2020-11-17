#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

extern string setfilename;

class CSVReader
{
    
public:
    
    vector<vector<string>> getData(string filename);
    void printData(vector<vector<string> > dataList);
    void extractRow(vector<vector<string> > dataList);
    
};
