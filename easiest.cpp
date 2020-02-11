#include <iostream>

using namespace std;

int digitSum(int in){
    int out = 0;
    while(in != 0){
        out += in % 10;
        in /= 10;
    }
    return out;
}

int main(){
    int in;
    while(cin >> in){
        if(in == 0){
            return 0;
        }
        int currentSum = digitSum(in);
        for(int i = 11; i< 101; ++i){
            if(digitSum(i*in) == currentSum){
                cout << i << endl;
                break;
            }
        }
    }
}