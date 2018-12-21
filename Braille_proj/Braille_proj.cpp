// Braille_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <fstream>
#include <string>
#include<vector>
#include <ctype.h>
using namespace std;

int checkType(char character) {
	try {
		if (isspace(character)) { throw 0; }
		if (character == '.') { throw 3; }
		if (ispunct(character)) { throw 5; }
		if (isupper(character)) { throw 2; }
		if (int(character)) {throw 4;}
		if (char(character)) {throw 1;}

	}
	catch (int e) {
		switch (e) {
		case 0 :
			return 0;
			break;
		case 1 :
			return 1;
			break;
		case 2 :
			return 2;
			break;
		case 3 :
			return 3;
			break;
		case 4 :
			return 4;
			break;
		case 5 :
			return 5;
			break;
		}
	}
}
int main()
{
	vector<char> listOfCharacters;
	vector<int> characterTypes;
	/*0 space
	1 letter
	2 capital letter
	3 decimal point
	4 number
	5 punctuation
	6 switch from capital to small
	7 switch from small to capital
	8 switch from number to letter
	9 switch from letter to number*/
	string tempContent;
	string content;
	string x;
	cout << "enter name of file: ";
	cin >> x;
	ifstream inFile;
	inFile.open(x + ".txt");
	while (!inFile.eof()) {
		inFile >> tempContent;
		content += tempContent;
		content += " ";
	}
	for (unsigned int i = 0; i<content.size(); i++) {                 //1 letter  2 capital letter  4 number
		listOfCharacters.push_back(content[i]);
	}
	for (unsigned int i = 0;i < listOfCharacters.size();i++) {
		characterTypes.push_back(checkType(listOfCharacters[i]));
		/*6 switch from capital to small
		  7 switch from small to capital
		  8 switch from number to letter
		  9 switch from letter to number*/
		if (checkType(listOfCharacters[i]) == 1 && checkType(listOfCharacters[i + 1] == 2)) { listOfCharacters.push_back(7);} // small to capital
		if (checkType(listOfCharacters[i]) == 1 && checkType(listOfCharacters[i + 1] == 4)) { listOfCharacters.push_back(9); }    // letter to number
		if (checkType(listOfCharacters[i]) == 4 && checkType(listOfCharacters[i + 1] == 1)) { listOfCharacters.push_back(8); }    // number to letter
	}
	for (unsigned int j = 0;j < listOfCharacters.size();j++) {
		cout << listOfCharacters.at(j);
	}

	system("pause");
	return 0;
}

