/*
 * Basics2.cpp
 *
 *  Created on: 28 Oct 2016
 *      Author: kku16
 */
#include <iostream>

using namespace std;

int main(){

	int n;

	cout << "Please enter an integer number: " << endl;
	cin >> n;

	if((n % 3) == 0){
		cout << n << " is divisible by 3" << endl;
	}
	else{
		cout << n << " is not divisible by 3" << endl;
	}

	return 0;
}



