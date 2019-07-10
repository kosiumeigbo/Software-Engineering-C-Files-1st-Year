/*
 * ConLoopsEx4.cpp
 *
 *  Created on: 11 Nov 2016
 *      Author: kku16
 */
#include <iostream>
using namespace std;

int main(){

	int num, max;

	cout << "Please enter an integer number greater than 0" << endl;
	cin >> num;
	cout << "Max number is " << num << endl;
	max = num;


	while(num != 0){
		cout << "Please enter an integer number greater than 0" << endl;
		cin >> num;
		if(num > max){
			max = num;
			cout << "Max number is " << num << endl;
		}
		else{
			cout << "Max number is " << max << endl;
		}
	}
	cout << "Program has ended." << endl;


	return 0;
}



