//IsItHalloween.com
#include <iostream>

using namespace std;

int main(){

    string inpM;
    cin >> inpM;
    int inpD;
    cin >> inpD;

    if(inpM == "OCT" && inpD == 31){
        cout << "yup" << endl;
    }
    else if(inpM == "DEC" && inpD == 25){
        cout << "yup" << endl;
    }
    else{
        cout << "nope" << endl;
    }
    return 0;

}