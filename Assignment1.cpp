#include <iostream>
#include <cmath>

using namespace std;

double arg(double X, double Y);

int main(){
    int num1, num2, num3;
    double x1, y1, t1, A1, D1;
    double x2, y2, theta1, A2;
    double x3, y3, t2, A3, D2;
    double x4, y4, theta2, A4;
    cout << "Please enter:" << endl;
    cout << "1 to convert from Phasor form to Waveform" << endl;
    cout << "2 to convert from Waveform to Phasor form" << endl;
    cin >> num1;
    //The user here inputs either 1 or 2 depending on what they want to do
    if(num1 == 1){
        cout << "Please enter:" << endl;
        cout << "1 to convert from Rectangular form" << endl;
        cout << "2 to convert from Exponential or Polar form" << endl;
        cin >> num2;
        //The user then chooses to convert from either form of the phasor expression whichever is convenient at that time
        if(num2 == 1){
            //The user has decided to change from Rectangular form of 'X + jY'
            cout << "Please enter the real part of the expression:" << endl;
            cin >> x1;
            cout << "Please enter the imaginary part of the expression:" << endl;
            cin >> y1;
            t1 = arg(x1, y1);
            D1 = (x1*x1) + (y1*y1);
            A1 = sqrt(D1);
            cout << "The waveform is given as:" << endl;
            if(y1 < 0){
                cout << x1 << "cos(wt) + " << (-y1) << "sin(wt)" << endl;
            }
            else{
                cout << x1 << "cos(wt) - " << (y1) << "sin(wt)" << endl;
            }
            cout << A1 << "cos(wt + " << t1 << ")" << endl;
        }

        else if(num2 == 2){
            //The user has decided to change from Exponential form which involves a modulus and an argument, 'Ae^j(@)'
            cout << "Please enter the modulus:" << endl;
            cin >> A2;
            cout << "Please enter the argument" << endl;
            cin >> theta1;
            x2 = A2*cos(theta1);
            y2 = A2*sin(theta1);
            cout << "The waveform is given as:" << endl;
            if(y2 < 0){
                cout << x2 << "cos(wt) + " << (-y2) << "sin(wt)" << endl;
            }
            else{
                cout << x2 << "cos(wt) - " << (y2) << "sin(wt)" << endl;
            }

            if(theta1 < 0){
                cout << A2 << "cos(wt - " << (-theta1) << ")" << endl;
            }
            else{
                cout << A2 << "cos(wt + " << (theta1) << ")" << endl;
            }
        }
    }

    else if(num1 == 2){
            cout << "Please enter:" << endl;
            cout << "1 for waveform involving cos(wt) and sin(wt)" << endl;
            cout << "2 for waveform involving cos(wt + @)" << endl;
            cin >> num3;
            //The user now wants to convert from waveform and is prompted to choose which waveform he or she wants to start from
            if(num3 == 1){
                //The user wants to convert from waveform of 'Xcos(wt) + Ysin(wt)'
                cout << "Please enter the coefficient of cos(wt)" << endl;
                cin >> x3;
                cout << "Please enter the coefficient of sin(wt)" << endl;
                cin >> y3;
                D2 = (x3*x3) + (y3*y3);
                A3 = sqrt(D2);
                t2 = arg(x3, (-y3));
                cout << "The phasor forms are:" << endl;
                if(y3 < 0){
                    cout << x3 << " + j" << (-y3) << endl;
                }
                else{
                    cout << x3 << " - j" << y3 << endl;
                }
                cout << A3 << "e^j(" << t2 << ")" << endl;
            }

            else if(num3 == 2){
                //The user wants to convert from waveform of 'Acos(wt + @)'
                cout << "Please enter the magnitude:" << endl;
                cin >> A4;
                cout << "Please enter the phase shift:" << endl;
                cin >> theta2;
                x4 = A4*cos(theta2);
                y4 = A4*sin(theta2);
                cout << "The phasor forms are:" << endl;
                if(y4 < 0){
                    cout << x4 << " - j" << (-y4) << endl;
                }
                else{
                    cout << x4 << " + j" << y4 << endl;
                }

                cout << A4 << "e^j(" << theta2 << ")" << endl;
            }
    }

    return 0;
}

double arg(double X, double Y){
    double ar1, ar2, ar3, ar4;
    double pi = 3.14159;

    if((X >= 0)&&(Y >= 0)){
        ar1 = atan((Y)/(X));
        return ar1;
    }

    else if((X < 0)&&(Y >= 0)){
        ar2 = pi + atan((Y)/(X));
        return ar2;
    }

    else if((X < 0)&&(Y < 0)){
        ar3 = atan((Y)/(X)) - pi;
        return ar3;
    }

    else if((X >= 0)&&(Y < 0)){
        ar4 = atan((Y)/(X));
        return ar4;
    }
}
