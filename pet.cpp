#include <iostream>

using namespace std;

int main(){
    int max = 0;
    int maxIndex = -1;
    for(int i = 0; i<5; ++i){
        int total = 0;
        for(int j = 0; j<4; ++j){
            int tempIn;
            cin >> tempIn;
            total += tempIn;
        }
        if(total > max){
            max = total;
            maxIndex = i;
        }
    }
    cout << ++maxIndex << " " << max << endl;
    return 0;
}