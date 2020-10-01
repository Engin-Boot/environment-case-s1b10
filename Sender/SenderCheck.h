#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
/*
 * A class to read data from a csv file.
 */
class CSVReader
{
    //string fileName;
    //string delimeter;
/*public:
    CSVReader(const string& filename, const string& delm = ",") :
            fileName(filename), delimeter(delm)
    { }*/
    // Function to fetch data from a CSV File
    std::vector<std::vector<std::string> > getData(string filename);
    vector<float> temperatureFetch();
    vector<float> humidityFetch();
};
