#include <iostream>
#include <string>

using namespace std;

int main(){

    string word1, word2;
    cout << "Please enter the first word" << endl;
    cin >> word1;
    cout << "Please enter the second word" << endl;
    cin >> word2;
    if(word1 < word2){
        cout << word1 << " comes before " << word2 << " in alphabetical order" << endl;
    }
    else{
        cout << word2 << " comes before " << word1 << " in alphabetical order" << endl;
    }

    return 0;
}
