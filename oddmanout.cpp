#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;

    for(int i = 0; i<caseNum; ++i){
        int inpNum;
        cin >> inpNum;
        vector<int> inps;
        for(int j = 0; j<inpNum; ++j){
            int inp;
            cin >> inp;
            inps.push_back(inp);
        }
        sort(inps.begin(), inps.end());
        bool end = true;
        cout << "Case #" << i + 1 << ": ";
        for(int j = 0; j<inps.size() - 1; j+=2){
            if(inps.at(j) != inps.at(j+1)){
                cout << inps.at(j);
                end = false;
                break;
            }
        }
        if(end){
            cout << inps.at(inps.size() - 1);
        }
        cout << endl;
    }
}