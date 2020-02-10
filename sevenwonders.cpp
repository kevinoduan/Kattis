#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int T, C, G;
    T = 0;
    C = 0;
    G = 0;

    string inp;
    cin >> inp;
    //cout << "Size: " << inp.size() << endl;
    for(int i = 0; i<inp.size(); ++i){
        if(inp.at(i) == 'T'){
            T++;
        }
        else if(inp.at(i) == 'C'){
            C++;
        }
        else if(inp.at(i) == 'G'){
            G++;
        }
    }
    //cout << "T: " << T << "C: " << C << "G: " << G;
    int outInt = pow(T, 2) + pow(C, 2) + pow(G, 2);
    int sets = min(T,C);
    if(sets > G){
        sets = G;
    }
    sets *= 7;
    outInt += sets;
    cout << outInt << endl;
    return 0;
}