#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    int caseNum, index = 0;
    cin >> caseNum;

    for(int i = 0; i<caseNum; ++i){
        int base, inp;
        int outp = 0;
        cin >> index >> base >> inp;
        vector<int> digits;
        while(inp >= base){
            digits.push_back(inp % base);
            inp -= inp % base;
            inp /= base;
        }
        digits.push_back(inp);
        for(int j = 0; j<digits.size(); ++j){
            outp += pow(digits.at(j),2);
        }
        cout << index << " " << outp << endl;
    }
    return 0;
}