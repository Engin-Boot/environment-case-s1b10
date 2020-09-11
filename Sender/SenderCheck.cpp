#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include "SenderCheck.h"

/*
* Parses through csv file line by line and returns the data
* in vector of vector of strings.
*/
std::vector<std::vector<std::string> > CSVReader::getData()
{
    std::ifstream file(fileName);
    std::vector<std::vector<std::string> > dataList;
    std::string line = "";
    std::string data = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
            // used for breaking words

        std::stringstream str(line);


        // read every column data of a row and

        // store it in a string variable, 'word'

        std::vector<std::string> vec;

        while (getline(str, data, ','))

        {

            // add all the column data

            // of a row to a vector vec

            vec.push_back(data);

        }
        dataList.push_back(vec);
    }
    // Close the File
    file.close();
    return dataList;
}
int main()
{
    // Creating an object of CSVWriter
    CSVReader reader("Testdata/dataset.csv");
    // Get the data from CSV File
    std::vector<std::vector<std::string> > dataList = reader.getData();
    // Print the content of row by row on screen
    for(std::vector<std::string> vec : dataList)
    {
        for(std::string data : vec)
        {
            std::cout<<data << " , ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
