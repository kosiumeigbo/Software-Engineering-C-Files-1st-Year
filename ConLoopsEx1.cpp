/*
 * ConLoopsEx1.cpp
 *
 *  Created on: 31 Oct 2016
 *      Author: kku16
 */
#include <iostream>
using namespace std;

int main(){

	double n, absvnn;

	cout << "Please enter any number of your choice:" << endl;
	cin >> n;

	if(n < 0){
		absvnn = -n;
		cout << "The absolute value of this number is " << absvnn;
	}
	else{
		cout << "The absolute value of this number is " << n;
	}

	return 0;
}



