#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;
    for(int j = 0; j<caseNum; ++j){
        string input;
        cin >> input;
        int side = sqrt(input.size());
        string out;
        for(int a = 0; a<side; ++a){
            int mod = side - a - 1;
            for(int i = 0; i<input.size(); ++i){
                if(i % side == mod){
                    out.push_back(input.at(i));
                }
            }
        }
        cout << out << endl;
    }
    return 0;
}