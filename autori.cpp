#include <iostream>

using namespace std;

int main(){
    string input;

    cin >> input;
    cout << input.at(0);

    for(int i = 0; i<input.length(); ++i){
        if(input.at(i) == '-'){
            cout << input.at(i+1);
        }
    }
    return 0;
}