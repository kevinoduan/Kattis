#include <iostream>
#include <vector>

using namespace std;

int digitSum(int inp){
    int sum = 0;
    while(inp != 0){
        sum += inp % 10;
        inp /= 10;
    }
    return sum;
}

int main(){
    int L, D, X;
    cin >> L >> D >> X;
    vector<int> sols;

    for(int i = L; i<=D; ++i){
        if(digitSum(i) == X){
            sols.push_back(i);
        }
    }
    cout << sols.at(0) << endl << sols.at(sols.size() - 1);
    return 0;
}