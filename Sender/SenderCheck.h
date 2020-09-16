#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/*
 * A class to read data from a csv file.
 */
class CSVReader
{
    std::string fileName;
    std::string delimeter;
public:
    CSVReader(const std::string& filename, const std::string& delm = ",") :
            fileName(filename), delimeter(delm)
    { }
    // Function to fetch data from a CSV File
    std::vector<std::vector<std::string> > getData();
};
