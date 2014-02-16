#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "Database.h"
#include "Table.h"

class Parser
{
private:
	Database* _db;
public:
	Parser();
	Parser(Database* db);
	~Parser();

	// use this function with readInputLine's returned vector 
	// to call the correct database/table functions
	void interpretInputVector(vector<string> inputVector);

	// split a line of input into a vector of strings
	std::vector<std::string> readInputLine(std::string intputLine);

	// call appropriate function based on user input, return true on success
	bool InsertCmd(std::vector<std::string> inputLine);


	// read an integer from input, starting at inputIndex, assign it to word, and return the number of characters read
	int readInteger(std::string& word, std::string input, int inputIndex);
	
	// read a type from input, starting at inputIndex, assign it to word, (assign the varchar parameter to varCharNum if applicable),
	// and return the number of characters read
	int readType(std::string& word, std::string input, int inputIndex);

	bool isOp(char c);
	bool isType(std::string s);

// TODO: implement following functions
	bool isDelimiter(char c); // can be space, quote, parenthesis, semi-colon, ...
	


	
};

