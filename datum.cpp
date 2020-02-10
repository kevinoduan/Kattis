#include <iostream>

using namespace std;

int main(){
    int day, month, daysPassed = 0;

    cin >> day >> month;

    switch (month){
        case 1: daysPassed += 0;
        break;
        case 2: daysPassed += 31;
        break;
        case 3: daysPassed += 31 + 28;
        break;
        case 4: daysPassed += 31 + 28 + 31; 
        break;
        case 5: daysPassed += 31 + 28 + 31 + 30; 
        break;
        case 6: daysPassed += 31 + 28 + 31 + 30 + 31; 
        break;
        case 7: daysPassed += 31 + 28 + 31 + 30 + 31 + 30; 
        break;
        case 8: daysPassed += 31 + 28 + 31 + 30 + 31 + 30 + 31; 
        break;
        case 9: daysPassed += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; 
        break;
        case 10: daysPassed += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;  
        break;
        case 11: daysPassed += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; 
        break;
        case 12: daysPassed += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; 
        break;
    }
    daysPassed += day;

    switch (daysPassed % 7){
        case 1: cout << "Thursday" << endl;
        break;
        case 2: cout << "Friday" << endl;
        break;
        case 3: cout << "Saturday" << endl;
        break;
        case 4: cout << "Sunday" << endl;
        break;
        case 5: cout << "Monday" << endl;
        break;
        case 6: cout << "Tuesday" << endl;
        break;
        case 0: cout << "Wednesday" << endl;
        break;
    }

    return 0;
}