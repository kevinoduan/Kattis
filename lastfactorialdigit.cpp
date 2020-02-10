#include <iostream>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;
    for(int j = 0; j<caseNum; ++j){
        int input;
        cin >> input;
        int out = 1;

        for(int i = 0; i<input; ++i){
            out *= (i+1);
        }
        cout << out % 10 << endl;
    }
    return 0;
}