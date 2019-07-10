/*
 * FuncEx2.cpp
 *
 *  Created on: 25 Nov 2016
 *      Author: kku16
 */
#include <iostream>

using namespace std;

bool is_even(double n);

int main(){
	double num;
	cout << "Please enter any integer number of your choice" << endl;
	cin >> num;
	double s;
	if(is_even(num)){
		cout << "This number is even" << endl;
	}
	else{
		cout << "This number is odd" << endl;
	}

	return 0;
}

bool is_even(double n){
	int q;
	q = 1*n;
	if ((q % 2)==0){
		return true;
	}
	else{
		return false;
	}
}


