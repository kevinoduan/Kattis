#include <iostream>

using namespace std;

int main(){
    int sum1, sum2;
    sum1 = 0;
    sum2 = 0;
    for(int i = 0; i<4; ++i){
        int tempIn;
        cin >> tempIn;
        sum1 += tempIn;
    }
    for(int i = 0; i<4; ++i){
        int tempIn;
        cin >> tempIn;
        sum2 += tempIn;
    }
    if(sum1 == sum2){
        cout << "Tie" << endl;
    }
    else if(sum1 > sum2){
        cout << "Gunnar" << endl;
    }
    else{
        cout << "Emma" << endl;
    }
    return 0;
}