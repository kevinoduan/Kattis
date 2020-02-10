#include <iostream>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;
    for(int i = 0; i<caseNum; ++i){
        string tempIn;
        cin >> tempIn;
        cout << tempIn.size() << endl;
    }
    return 0;
}