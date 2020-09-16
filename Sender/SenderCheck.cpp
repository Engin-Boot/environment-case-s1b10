#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
#include "SenderCheck.h"

std::vector<std::vector<std::string> > CSVReader::getData()
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
}
int main()
{
    
    CSVReader reader("Testdata/dataset.csv");
    
    std::vector<std::vector<std::string> > dataList = reader.getData();
    
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
