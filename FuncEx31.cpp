#include <iostream>

using namespace std;

bool is_prime(int num);

int main(){
    int n;
    int j;
    cout << "Please enter an integer number greater than 1" << endl;
    cin >> n;
    j = 2;
    while(j <= n){
        if(is_prime(j)){
             cout << "A prime number up to " << n << " is " << j << endl;
        }
        cout << j << endl;
        j++;
    }
    cout << "It has ended" << endl;

return 0;
}

bool is_prime(int num){
    int i;
    bool found_factor;
    for(i = 2; (i < num)&&(!found_factor); i++){
        if((num % i) == 0){
            found_factor = true;
        }
    }
    if(found_factor){
        return false;
    }
    else{
        return true;
    }
}
