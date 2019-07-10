#include <iostream>

using namespace std;

double mfact(int num);

int main(){
    int n, m;
    cout << "Please enter a positive integer number" << endl;
    cin >> n;
    m = mfact(n);
    cout << " The value of " << n << "! is " << m << endl;
    return 0;
}

double mfact(int num){
    int p, k;
    int i = 1;
    int l = 1;

    if(num < 2){
        p = 1;
        return p;
    }

    while((i < num)&&(num > 1)){
        l = (num - i)*l;
        i = i + 1;
    }

    k = num*l;
    return k;
}
