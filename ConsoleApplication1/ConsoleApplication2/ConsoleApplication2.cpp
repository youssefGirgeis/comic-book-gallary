// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int iArr[] = { 6,3,9,2,1,7,4,5,10};
	int iLen = sizeof(iArr) / sizeof(int);

	//cout << sizeof(iArr) << endl;
	//cout << sizeof(int) << endl;
	//cout << iLen << endl;

	for (int i = 0; i < iLen; i++) {
		cout << iArr[i] << ",";
	}

	cout << endl;

	int first;

	for (int i = 0; i < iLen; i++) {
		first = iArr[i];
		for (int j = 0; j < iLen; j++) {

		}
	}

    return 0;
}

