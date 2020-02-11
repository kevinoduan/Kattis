#include <iostream>
#include <map>

using namespace std;

int main(){
    map<char, string> dictionary;
    string in;

    dictionary['a'] = "@";
    dictionary['b'] = "8";
    dictionary['c'] = "(";
    dictionary['d'] = "|)";
    dictionary['e'] = "3";
    dictionary['f'] = "#";
    dictionary['g'] = "6";
    dictionary['h'] = "[-]";
    dictionary['i'] = "|";
    dictionary['j'] = "_|";
    dictionary['k'] = "|<";
    dictionary['l'] = "1";
    dictionary['m'] = "[]\\/[]";
    dictionary['n'] = "[]\\[]";
    dictionary['o'] = "0";
    dictionary['p'] = "|D";
    dictionary['q'] = "(,)";
    dictionary['r'] = "|Z";
    dictionary['s'] = "$";
    dictionary['t'] = "']['";
    dictionary['u'] = "|_|";
    dictionary['v'] = "\\/";
    dictionary['w'] = "\\/\\/";
    dictionary['x'] = "}{";
    dictionary['y'] = "`/";
    dictionary['z'] = "2";

    getline(cin, in);
    for(int i = 0; i<in.size(); ++i){
        if(tolower(in.at(i)) <= 122 && tolower(in.at(i)) >= 97){
            cout << dictionary[tolower(in.at(i))];
        }
        else{
            cout << in.at(i);
        }
    }
}