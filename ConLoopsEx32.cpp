#include <iostream>
using namespace std;

int main(){

	int dd, mm, yyyy, sumdd, summm, sumyyyy;

	cout << "You will be required to enter today's date in the form 'dd/mm/yyyy'. Please enter the day in dd: " << endl;
	cin >> dd;
	cout << "Now please enter the month in mm: " << endl;
	cin >> mm;
	cout << "Now please enter the year in yyyy: " << endl;
	cin >> yyyy;

	if((dd == 30)&&(mm == 9)){
            summm = mm + 1;
		cout << "Tomorrow's date is 01/" << summm << "/" << yyyy << endl;
	}

	if((dd == 30)&&(mm == 04)){
            summm = mm + 1;
        cout << "Tomorrow's date is 01/" << summm << "/" << yyyy << endl;
	}

	if((dd == 30)&&(mm == 06)){
            summm = mm + 1;
        cout << "Tomorrow's date is 01/" << summm << "/" << yyyy << endl;
	}

	if((dd == 30)&&(mm == 11)){
            summm = mm + 1;
        cout << "Tomorrow's date is 01/" << summm << "/" << yyyy << endl;
	}

	if((dd < 30)&&(mm == 9)){
            sumdd = dd + 1;
        cout << "Tomorrow's date is " << sumdd << "/" << mm << "/" << yyyy << endl;
	}

	if((dd < 30)&&(mm == 04)){
            sumdd = dd + 1;
        cout << "Tomorrow's date is " << sumdd << "/" << mm << "/" << yyyy << endl;
	}

	if((dd < 30)&&(mm == 06)){
            sumdd = dd + 1;
        cout << "Tomorrow's date is " << sumdd << "/" << mm << "/" << yyyy << endl;
	}

	if((dd < 30)&&(mm == 11)){
            sumdd = dd + 1;
        cout << "Tomorrow's date is " << sumdd << "/" << mm << "/" << yyyy << endl;
	}

	if((dd == 31)&&(mm == 12)){
            sumyyyy = yyyy + 1;
		cout << "Tomorrow's date is 01/01/" << sumyyyy << endl;
	}

	if((dd < 31)&&(mm == 12)){
        sumdd = dd + 1;
        cout << "Tomorrow's date is " << sumdd << "/12/" << yyyy << endl;
	}

	if((dd == 31)&&((mm != 9)||(mm != 04)||(mm != 06)||(mm != 11)||(mm != 12))){
            summm = mm + 1;
		cout << "Tomorrow's date is 01/" << summm << "/" << yyyy << endl;
	}

	if((dd < 31)&&((mm != 9)||(mm != 04)||(mm != 06)||(mm != 11)||(mm != 12))){
            sumdd = dd + 1;
        cout << "Tomorrow's date is " << sumdd << "/" << mm << "/" << yyyy << endl;
	}

	if ((dd == 28)&&(mm == 02)){
            if(yyyy % 4 == 0){
                    if(yyyy % 100 == 0){
                            if(yyyy % 400 == 0){
                                cout << "Tomorrow's date is 29/02/" << yyyy << endl;
                            }
                            else{
                                cout << "Tomorrow's date is 01/03/" << yyyy << endl;
                            }
                    }
                    else{
                        cout << "Tomorrow's date is 29/02/" << yyyy << endl;
                    }
            }
            else{
                cout << "Tomorrow's date is 01/03/" << yyyy << endl;
            }

	}

	if((dd < 28)&&(mm == 02)){
            sumdd = dd + 1;
         cout << "Tomorrow's date is " << sumdd << "/" << mm << "/" << yyyy << endl;
	}

	return 0;
}



