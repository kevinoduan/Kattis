#include <iostream>

using namespace std;

int main(){
    char alphabet[28] = {0};
    int ascii = 65;
    for(int i = 0; i< 26; ++i){
        alphabet[i] = ascii;
        ascii++;
    }
    alphabet[26] = '_';
    alphabet[27] = '.';

    int in;
    while(cin >> in){
        if(in == 0){
            return 0;
        }
        string inpStr;
        cin >> inpStr;
        int index = -1;
        for(int i = inpStr.size() - 1; i> -1; --i){
            if(inpStr.at(i) == '_'){
                index = 26;
            }
            else if(inpStr.at(i) == '.'){
                index = 27;
            }
            else{
                index = inpStr.at(i) % 65;
            }
            cout << alphabet[(index + in) % 28];
        }
        cout << endl;
    }
}