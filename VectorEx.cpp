//1) The following code was something I tried to do to see how I could handle values in vectors and vectors in functions
#include <iostream>
#include <vector>

using namespace std;

void change(vector<int>& vec, vector<int>& vec1);

int main(){
    int i;
    vector<int> vec1;
    vector<int> vec(4);
    vec[0] = 1;
    vec[1] = 2;
    vec[2] = 3;
    vec[3] = 4;

    change(vec, vec1);
    for(i = 0; i < vec1.size(); i++){
        cout << vec1[i] << endl;
    }

    return 0;
}

void change(vector<int>& vec, vector<int>& vec1){
    int i = 0;
    if(vec[i] == 1){
        for(int j = 0; j < vec.size(); j++){
        vec[j] = vec[j + 1];
        vec[4] = 0;
        }
    }
    for(int m = 0; m < vec.size(); m++){
        vec1.push_back(vec[m]);
    }
}

//2) The following code was something I tried to do to see how I could handle values in vectors. A similar version to the first one above.
#include <iostream>
#include <vector>

using namespace std;

void change(vector<int>& vec, vector<int>& vec1);

int main(){
    int i;
    vector<int> vec1;
    vector<int> vec(6);
    vec[0] = 1;
    vec[1] = 2;
    vec[2] = 3;
    vec[3] = 4;
    vec[4] = 5;
    vec[5] = 6;

    change(vec, vec1);
    for(i = 0; i < vec1.size(); i++){
        cout << vec1[i] << endl;
    }

    return 0;
}

void change(vector<int>& vec, vector<int>& vec1){
    int i = 0;
    if(vec[i] == 1){
        vec[2] = vec[1];
        vec[1] = vec[0];
        vec[0] = 3;
    }
    vec[5] = 0;
    for(int m = 0; m < vec.size(); m++){
        vec1.push_back(vec[m]);
    }
}

//They both worked out fine. Compiled and ran fine. No problems.
