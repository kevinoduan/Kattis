#include <iostream>

using namespace std;

int main(){
    string inp;

    cin >> inp;

    for (int i = 1; i<inp.size(); ++i){
        if(inp.at(i-1) == 's' && inp.at(i) == 's'){
            cout << "hiss" << endl;
            return 0;
        }
    }
    cout << "no hiss" << endl;
    return 0;
}