#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;
    vector<string> names;
    vector<string> namesReverse(caseNum);
    for(int i = 0; i<caseNum; ++i){
        string temp;
        cin >> temp;
        names.push_back(temp);
        namesReverse.at(caseNum - 1 - i) = temp;
    }
    if(std::is_sorted(names.begin(), names.end())){
        cout << "INCREASING" << endl;
        return 0;
    }
    else if(std::is_sorted(namesReverse.begin(), namesReverse.end())){
        cout << "DECREASING" << endl;
        return 0;
    }
    else{
        cout << "NEITHER" << endl;
        return 0;
    }
}