/*
 * StructNotes1.cpp
 *
 *  Created on: 13 Jan 2017
 *      Author: kku16
 */
#include <iostream>
#include <cmath>
using namespace std;

struct Point{
	double x;
	double y;
};

double pdistance(Point p1, Point p2);

int main(){

	Point p1, p2, o;
	o.x = 0;
	o.y = 0;

	cout << "enter the coordinates of p1:" << endl;
	cin >> p1.x >> p1.y;

	cout << "enter the coordinates of p2:" << endl;
	cin >> p2.x >> p2.y;

	double d1 = pdistance(p1, o);
	double d2 = pdistance(p2, o);

	cout << "distance of p1 from the origin is " << d1 << endl;
	cout << "distance of p2 from the origin is " << d2 << endl;

	if(d1 < d2){
        cout << "p1 is closer to the origin" << endl;
	}
	else if(d2 > d1){
        cout << "p2 is closer to the origin" << endl;
	}
	else if(d1 == d2){
        cout << "p1 and p2 are equidistant form the origin" << endl;
	}
	return 0;
}

double pdistance(Point p1, Point p2){
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}






