#include <iostream>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;

    for(int i = 0; i<caseNum; ++i){
        int temp;
        cin >> temp;
        if(temp % 400 == 0){
            cout << temp / 400 << endl;
        }
        else{
            cout << temp / 400 + 1 << endl;
        }
    }
}