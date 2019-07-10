/*
 * Notes1Ex4.cpp
 *
 *  Created on: 24 Oct 2016
 *      Author: kku16
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	double n1, n2, result1, result2, result3, result4;

	cout << "Please enter two numbers:" << endl;
	cin >> n1 >> n2;
	result1 = n1 + n2;
	result2 = n1 - n2;
	result3 = n1*n2;
	result4 = n1/n2;
	cout << n1 << "+" << n2 << "=" << result1 << endl;
	cout << n1 << "-" << n2 << "=" << result2 << endl;
	cout << n1 << "x" << n2 << "=" << result3 << endl;
	cout << n1 << "/" << n2 << "=" << result4 << endl;

	return 0;
}



