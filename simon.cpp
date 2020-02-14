#include <iostream>

using namespace std;

int main(){
    string s1 = "simon says ";
    int caseNum;
    cin >> caseNum;
    cin.ignore (std::numeric_limits<streamsize>::max(), '\n');
    for(int i = 0; i<caseNum; ++i){
        string caseStr;
        getline(cin, caseStr);
        if(caseStr.substr(0, 11) == s1){
            cout << caseStr.substr(11) << endl;;
        }
    }
}