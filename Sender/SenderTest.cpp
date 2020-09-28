#define CATCH_CONFIG_MAIN

#include<iostream>
#include<string>
#include"catch.hpp"
#include"../Sender/Sender.h"
using namespace std;

TEST_CASE("When valid data file is received by the sender then print data successfully") {
	string FileName = "Testdata/dataset.csv";
	string str = getData(FileName);
	REQUIRE(str == "File read and printed successfully");
}
