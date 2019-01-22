// W19_CST126_1.cpp : Cyclomatic Complexity
//

//#include "pch.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int wordCount;
int words[5];

int loadText(int words[], int wordCount);
void showSelection();


int main()
{
	ifstream inputFile;
	string fileName = "test.txt";

	inputFile.open(fileName.c_str()); // Wont work!


	if (inputFile.fail())
	{
		cout << "Error opening input file." << endl;
		//return -1;
	}
	else
	{
		cout << "File opened successfully" << endl;
	}

	int wordIndex = 0;

	// Loop to load items into data base
	for (wordIndex = 0; wordIndex < 85; wordIndex++)
	{
		string newWord;
		string testIf = "if", testElse = "else", testWhile = "while", testCase = "case", testFor = "for";
		//inputFile >> newWord;
		getline(inputFile, newWord, ' ');


		cout << "newWord: " + newWord<< endl;

		if (newWord == testIf) {
			words[0]++;
			wordCount++;
			cout << "Word Count: " + wordCount << endl;
		}
		else if (newWord == testElse) {
			words[1]++;
			wordCount++;
			cout << "Word Count: " + wordCount << endl;
		} else if (newWord==testWhile) {
			words[2]++;
			wordCount++;
			cout << "Word Count: " + wordCount << endl;
		} else if (newWord == testCase) {
			words[3]++;
			wordCount++;
			cout << "Word Count: " + wordCount << endl;
		} else if (newWord == testFor) {
			words[4]++;
			wordCount++;
			cout << "Word Count: " + wordCount << endl;
		}
		else {
			break;
		}
	}

    inputFile.close();
	return 0;
}
