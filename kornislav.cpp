#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> inp;
    for(int i = 0; i<4; ++i){
        int input;
        cin >> input;
        inp.push_back(input);
    }
    sort(inp.begin(), inp.end());
    cout << inp.at(0) * inp.at(2) << endl;
    return 0;
}