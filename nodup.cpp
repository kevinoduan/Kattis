#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> input;
    string in;

    while(cin >> in){
        input.push_back(in);
    }
    std::sort(input.begin(), input.end());
    if(input.end() != std::unique(input.begin(), input.end())){
        cout << "no";
        return 0;
    }
    else{
        cout << "yes";
        return 0;
    }
    return 0;
}