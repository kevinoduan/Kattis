#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<char> chars;
    for(int i = 0; i<5; ++i){
        string inp;
        cin >> inp;
        chars.push_back(inp.at(0));
    }
    sort(chars.begin(), chars.end());
    int max = 1;
    int counter = 1;
    char curChar = chars.at(0);

    for(int i = 1; i<chars.size(); ++i){
        if(chars.at(i) == curChar){
            counter++;
            if(counter > max){
                max = counter;
            }
        }
        else{
            curChar = chars.at(i);
            counter = 1;
        }
    }
    cout << max << endl;
    return 0;
}