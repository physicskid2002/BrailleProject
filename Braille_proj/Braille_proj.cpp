// Braille_project.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include<iostream>
#include <fstream>
#include <string>
#include<vector>
#include <ctype.h>
using namespace std;

vector<char> listOfCharacters;

void checkGarde2Conv(vector<int> finalval) {     //take in list of characters 
	for (int i = 0;i < listOfCharacters.size();i++) {
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) == "and" || "And") { 
		listOfCharacters.erase(listOfCharacters.begin() + i + 1); 
		listOfCharacters.erase(listOfCharacters.begin() + i + 1); 
		finalval.at(i) = 111101;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) == "for"||"For") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 111111;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) == "the"|| "The") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 011101;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) == "out"|| "Out") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 110011;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) == "con"|| "Con") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 010010;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) == "dis"||"Dis") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 010011;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) == "his"||"His") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 011001;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) == "was"||"Was") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 001011;
		}

		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "of" || "Of") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 111011;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "ch" || "Ch") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 100001;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "gh" || "Gh") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 110001;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "sh" || "Sh") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 100101;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "th" || "Th") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 100111;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) =="wh" || "Wh") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 100011;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) =="ed" || "Ed") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 110101;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "er" || "Er") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 110111;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "ou" || "Ou") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 110011;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "ow" || "Ow") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 010101;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "ea" || "Ea") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 010000;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "be" || "Be") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 011000;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "en" || "En") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 010001;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "to" || "To") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 011010;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "in" || "In") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 001010;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) == "by" || "By") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 001011;
		}

		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) + listOfCharacters.at(i+3) == "with" || "With") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 011111;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) + listOfCharacters.at(i + 3) == "this" || "This") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 100111;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) + listOfCharacters.at(i + 3) == "will" || "Will") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 010111;
		}
		if (string() + listOfCharacters.at(i) + listOfCharacters.at(i + 1) + listOfCharacters.at(i + 2) + listOfCharacters.at(i + 3) == "were" || "Were") {
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			listOfCharacters.erase(listOfCharacters.begin() + i + 1);
			finalval.at(i) = 011011;
		}
	}
}

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
		if (checkType(listOfCharacters[i]) == 1 && checkType(listOfCharacters[i + 1] == 2)) { characterTypes.push_back(7);} // small to capital
		if (checkType(listOfCharacters[i]) == 1 && checkType(listOfCharacters[i + 1] == 4)) { characterTypes.push_back(9); }    // letter to number
		if (checkType(listOfCharacters[i]) == 4 && checkType(listOfCharacters[i + 1] == 1)) { characterTypes.push_back(8); }    // number to letter
	}
	// checkGarde2Conv  
	for (unsigned int j = 0;j < listOfCharacters.size();j++) {
		cout << listOfCharacters.at(j);
	}
	checkGarde2Conv();
	vector<int> finalBinaryValues(listOfCharacters.size());


	system("pause");
	return 0;
}

