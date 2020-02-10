#include <iostream>
#include <vector>

using namespace std;

int main(){
    int caseNum = 1;
    while(true){
        int caseSize;
        cin >> caseSize;
        if(caseSize == 0){
            return 0;
        }
        cout << "SET " << caseNum << endl;
        vector<string> names;
        for(int i = 0; i<caseSize; ++i){
            string tempName;
            cin >> tempName;
            names.push_back(tempName);
        }
        for(int i = 0; i<names.size(); ++i){
            if(i % 2 == 0){
                cout << names.at(i) << endl;
            }
        }
        for(int i = names.size() - 1; i > -1; --i){
            if(i % 2 == 1){
                cout << names.at(i) << endl;
            }
        } 
        caseNum++;
    }
}