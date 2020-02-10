#include <iostream>
#include <vector>

using namespace std;

int main(){
    string name;
    cin >> name;
    vector<char> out;
    out.push_back(name.at(0));
    for(int i = 1; i<name.size(); ++i){
        if(name.at(i) != name.at(i-1)){
            out.push_back(name.at(i));
        }
    }
    for(int i = 0; i<out.size(); ++i){
        cout << out.at(i);
    }
    return 0;
}