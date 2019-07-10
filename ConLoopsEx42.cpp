/*
 * ConLoopsEx42.cpp
 *
 *  Created on: 14 Nov 2016
 *      Author: kku16
 */
#include <iostream>
using namespace std;

int main(){

        int num, n;
        double avg, avg1;

        cout << "Please enter an integer number greater than 0" << endl;
        cin >> num;
        n = 1;
        avg = num/n;
        cout << "The average of these numbers is " << avg << endl;
        cout << "Please enter an integer number greater than 0" << endl;
        cin >> num;
        avg1 = avg;
        n++;
        avg = ((avg1)*((n - 1)/n)) + (num/n);
        cout << "The average of these numbers is " << avg << endl;


        while(num != 0){
        		cout << "Please enter an integer number greater than 0" << endl;
        		cin >> num;
        		n = n + 1;
        		avg1 = avg;
        		avg = ((avg)*((n - 1)/n)) + ((num)/n);
        		cout << "The average of these numbers is " << avg << endl;

        }
        cout << "The program has ended" << endl;

        return 0;
}




