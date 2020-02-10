#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    long long int input;
    cin >> input;
    vector<int> inputV;
    while(input >= 2){
        inputV.push_back(input % 2);
        input /= 2;
    }
    inputV.push_back(input);
    int out = 0;
    for(int i = 0; i<inputV.size(); ++i){
        out += inputV.at(i) * pow(2, inputV.size() - 1 - i);
    }
    cout << out << endl;
    return 0;
}