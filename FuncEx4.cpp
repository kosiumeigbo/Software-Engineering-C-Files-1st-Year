#include <iostream>

using namespace std;

double mpower(double x, double n);

int main(){
    double num, r, p;
    cout << "Please enter the base number" << endl;
    cin >> num;
    cout << "Please enter the power to which the number is raised" << endl;
    cin >> r;
    p = mpower(num, r);
    cout << "The value of " << num << " raised to the power of " << r << " is " << p << endl;

return 0;
}

double mpower(double x, double n){
    int w;
    int k = 0;
    int acc = 1;
    while(k < n){
        acc = x*acc;
        k = k + 1;
    }
    w = acc;
    return w;
}
