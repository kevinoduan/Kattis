#include <iostream>

using namespace std;

int main(){
    int capable;
    string inp, inp2;

    cin >> inp;
    capable = inp.size();
    cin >> inp2;
    if(inp2.size() <= capable){
        cout << "go" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}