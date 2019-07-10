#include <iostream>

using namespace std;

bool is_prime(int num);

int main(){
    int n;
    cout << "Please type in an integer of your choice" << endl;
    cin >> n;
    if(is_prime(n)){
        cout << "This number is a prime number" << endl;
    }
    else{
        cout << "This number is not a prime number" << endl;
    }

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
