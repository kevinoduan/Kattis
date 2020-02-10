#include <iostream>

using namespace std;

int main(){
    int G, S, C;
    string out1, out2;
    cin >> G >> S >> C;
    int money = 3 * G + 2 * S + C;
    if(money >= 8){
        out1 = "Province or ";
    }
    else if(money >= 5){
        out1 = "Duchy or ";
    }
    else if(money >= 2){
        out1 = "Estate or ";
    }
    else{
        out1 = "";
    }

    if(money >= 6){
        out2 = "Gold";
    }
    else if(money >= 3){
        out2 = "Silver";
    }
    else{
        out2 = "Copper"; 
    }
    cout << out1 << out2 << endl;
    return 0;
}