#include "stdafx.h"
/*****************************
This program is to introduce the pointers
*****************************/

#include <iostream>
using namespace std;

int main()
{
	int iVal = 5;
	int *pi1Val, *pi2Val;
	pi1Val = &iVal;
	pi2Val = &iVal;

	cout << "iVal=" << iVal << endl;
	cout << "Pointer 1 = " << pi1Val << " Content = " << *pi1Val << endl;
	cout << "Pointer 2 = " << pi2Val << " Content = " << *pi2Val << endl;

	*pi1Val = 9;

	cout << "iVal=" << iVal << endl;
	cout << "Pointer 1 = " << pi1Val << " Content = " << *pi1Val << endl;
	cout << "Pointer 2 = " << pi2Val << " Content = " << *pi2Val << endl;
	return (0);
}
