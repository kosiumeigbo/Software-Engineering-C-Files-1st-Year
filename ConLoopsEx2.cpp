/*
 * ConLoopsEx2.cpp
 *
 *  Created on: 4 Nov 2016
 *      Author: kku16
 */
#include <iostream>
#include <string>
using namespace std;

int main() {

string t;
double n, nC, nF;


cout << "This is a program to convert temperature values between the Celsius and Fahrenheit scales" << endl;
cout << "Please enter the number you want to convert: " << endl;
cin >> n;
cout << "Please enter F if the scale of your input is in Fahrenheit and C if in Celsius: " << endl;
cin >> t;

if (t == "C"){
	nF = (n * 9/5) + 32;
	cout << "The value of " << n << " C" << " in Fahrenheit is " << nF << " F" << endl;
}
else if (t == "F"){
	nC = (n - 32) * 5/9;
	cout << "The value of " << n << " F" << " in Celsius is " << nC << " C" << endl;
}

	return 0;
}



