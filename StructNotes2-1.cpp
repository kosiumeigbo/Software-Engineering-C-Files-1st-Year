#include <iostream>
#include <vector>

using namespace std;

struct point{
    double x;
    double y;
};

int main(){

    vector<point> vp;
    point tmpp;
    do{
        cin >> tmpp.x >> tmpp.y;
        vp.push_back(tmpp);
    } while (!((tmpp.x == 0)&&(tmpp.y == 0)));

    cout << "You entered the following points" << endl;
    for (int i = 0; i < vp.size(); i++){
        cout << "(" << vp[i].x << ", " << vp[i].y << ")" << endl;
    }

    cout << "that in reversed order are:" << endl;
    for (int i = vp.size() - 1; i >= 0; i--){
        cout << "(" << vp[i].x << ", " << vp[i].y << ")" << endl;
    }

    return 0;
}
