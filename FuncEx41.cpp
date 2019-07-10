#include <iostream>

using namespace std;

double mpower(double x, double n);

double mpowersum(double x, double n);

int main(){
    int x, n, s;
    cout << "Please enter the base number" << endl;
    cin >> x;
    cout << "Please enter the power" << endl;
    cin >> n;
    s = mpowersum(x, n);
    cout << "The sum of all " << x << " raised from power 1 to " << n << " is " << s << endl;
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

double mpowersum(double x, double n){
    int p, k, m;
    int i = 1;
    int l = 0;
    k = mpower(x, i);
    i = i + 1;
    while(i <= n){
        m = mpower(x, i);
        l = m + l;
        i = i + 1;
    }
    p = l + k;
    return p;
}


