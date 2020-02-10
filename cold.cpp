#include <iostream>

using namespace std;

int main(){
    int caseNum, count = 0;
    cin >> caseNum;

    for(int i = 0; i<caseNum; ++i){
        int tempNum;
        cin >> tempNum;

        if(tempNum < 0){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}