#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, int> pairs;
    int lineNum;
    cin >> lineNum;

    for(int i = 0; i<lineNum; ++i){
        int temp;
        cin >> temp;
        if (pairs.find(temp) == pairs.end()) {
            pairs[temp] = i;
        } 
    }
    cout << pairs.begin()->second << endl;
}