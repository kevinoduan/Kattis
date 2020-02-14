#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    int lineNum;
    vector<int> trees;
    int out = 0;
    cin >> lineNum;
    for(int i = 0; i<lineNum; ++i){
        int temp;
        cin >> temp;
        trees.push_back(temp);
    }
    sort(trees.begin(), trees.end(), greater<int>());
    for(int i = 0; i<trees.size(); ++i){
        int temp = trees.at(i) + i + 2;
        if(temp > out){
            out = temp;
        }
    }
    cout << out << endl;
    return 0;
}