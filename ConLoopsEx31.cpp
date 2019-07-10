/*
 * ConLoopsEx31.cpp
 *
 *  Created on: 7 Nov 2016
 *      Author: kku16
 */
#include <iostream>
using namespace std;

int main(){

	int n;
	cout << "Please enter a year to check if it is a leap year" << endl;
	cin >> n;

	if(n % 4 == 0){
		if(n % 100 == 0){
			if(n % 400 == 0){
				cout << n << " is a leap year" << endl;
			}
			else{
				cout << n << " is not a leap year" << endl;
			}
		}
		else{
			cout << n << " is a leap year" << endl;
		}
	}
	else{
		cout << n << " is not a leap year" << endl;
	}

	return 0;
}



