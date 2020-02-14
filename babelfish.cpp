#include <iostream>
#include <map>

using namespace std;

int main(){
    string in;
    map<string, string> dict;
    while(getline(cin, in)){
        if(in.empty()){
            break;
        }
        int counter = 0;
        string key, value;
        bool swap = false;
        for (short i = 0; i<in.length(); i++){
            if(in[i] == ' '){
                swap = !swap;
            }
            else if(swap){
                key += in[i];
            }
            else{
                value += in[i];
            }
        }
        dict[key] = value;
    }
    while(cin >> in){
        if (dict.find(in) == dict.end()) {
            cout << "eh" << endl;
        } 
        else {
            cout << dict[in] << endl;
        }
    }
}