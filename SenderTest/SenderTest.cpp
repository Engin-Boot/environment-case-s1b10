#define CATCH_CONFIG_MAIN

#include<iostream>
#include<string>
#include"../catch.hpp"
#include"../Sender/Sender.h"
using namespace std;

CSVReader obj;

TEST_CASE("When valid data file is received by the sender then print data successfully") {
	string reqFileName = "Testdata/dataset.csv";
	//string str = obj.getData(FileName);
	REQUIRE(obj.setfilename == reqFileName);
}
