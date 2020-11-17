#define CATCH_CONFIG_MAIN

#include<iostream>
#include<string>
#include"../catch.hpp"
#include"../Sender/SenderCheck.h"
using namespace std;

CSVReader obj;


TEST_CASE("When a field is empty then the CSV file is invalid") {
	
	string fileName = "Testdata/test-dataset.csv";
	vector<vector<string>> data = obj.getData(fileName);
	obj.extractRow(data);
	REQUIRE(setfilename == "The CSV file has empty fields");
}
