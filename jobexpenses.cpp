#include <iostream>

using namespace std;

int main(){
    int lineNum;
    cin >> lineNum;
    int out = 0;

    for(int i = 0; i<lineNum; ++i){
        int temp; 
        cin >> temp;
        if(temp < 0){
            out += temp;
        }
    }
    out *= -1;
    cout << out << endl;
    return 0;
}