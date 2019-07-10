/*
 * ConLoopsEx41.cpp
 *
 *  Created on: 11 Nov 2016
 *      Author: kku16
 */
#include <iostream>
using namespace std;

int main(){

	int num, min;

	cout << "Please enter an integer number greater than 0" << endl;
	cin >> num;
	min = num;
	cout << "Min number is " << num << endl;


	while(num != 0){
		cout << "Please enter an integer number greater than 0" << endl;
		cin >> num;
		if(num < min){
			min = num;
			cout << "Min number is " << num << endl;
		}
		else{
			cout << "Min number is " << min << endl;
		}
	}
	cout << "Program has ended" << endl;


	return 0;
}



