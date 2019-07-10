/*
 * BasicsLoops.cpp
 *
 *  Created on: 28 Oct 2016
 *      Author: kku16
 */
#include <iostream>
#include <string>

using namespace std;

int main(){

	int n;
	string more = "yes";

	while(more == "yes"){
		cout << "Please enter an integer number: " << endl;
		cin >> n;

		if( (n % 2) == 0){
			cout << n << " is even" << endl;
		}
		else{
			cout << n << " is odd" << endl;
		}

		cout << "another one?" << endl;
		cin >> more;
	}

	cout << "ok, bye" << endl;

	return 0;
}



