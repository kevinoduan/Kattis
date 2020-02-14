#include <iostream>
#include <vector>

using namespace std;

int main(){
    string in;
    vector<char> out;
    getline(cin, in);
    int backspace = 0;

    for(int i = in.size()-1; i > -1; --i){
        if(in.at(i) == '<'){
            backspace++;
        }
        else{
            if(backspace != 0){
                backspace--;
            }
            else{
                out.push_back(in.at(i));
            }
        }
    }
    for(int i = out.size()-1; i>-1; --i){
        cout << out.at(i);
    }
    return 0;
}