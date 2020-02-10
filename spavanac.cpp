#include <iostream>

using namespace std;

int main(){
    int time;
    int hr, min;
    cin >> hr >> min;

    min -= 45;
    if(min < 0){
        min += 60;
        hr--;
    }
    if(hr < 0){
        hr += 24;
    }
    cout << hr << " " << min << endl;

}