/*
 * ConLoopsEx61.cpp
 *
 *  Created on: 18 Nov 2016
 *      Author: kku16
 */
#include <iostream>
using namespace std;
int main(){
	double x, acc;
	int n, i;
	i = 1;
	cout << "Please enter a number, 'x':" << endl;
	cin >> x;
	cout << "Please enter a number, 'n':" << endl;
	cin >> n;
	acc = 1;

	while(i <= n){
		acc = x*acc;
		i++;
	}
	cout << "The value of x^(n) is " << acc << endl;;
	return 0;
}



