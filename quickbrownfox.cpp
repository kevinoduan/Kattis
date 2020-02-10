#include <iostream>
#include <vector>
#include <ctype.h>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;
    for(int i = 0; i<caseNum + 1; ++i){
        vector<bool> index(26, false);
        string inpString;
        //cin >> inpString;
        getline(cin, inpString);

        for(int j = 0; j<inpString.size(); ++j){
            //cout << (tolower(inpString.at(j)) % 97) << endl;
            if((tolower(inpString.at(j)) % 97) < 26){
                index.at(tolower(inpString.at(j)) % 97) = true;
                //cout << "TRUE" << endl;
            }
        }

        string missing;
        int count = 0;
        for(int j = 0; j<index.size(); ++j){
            if(index.at(j) == false){
                missing += (char)(97 + j);
            }
            else{
                count++;
                //cout << "count " << count;
            }
        }
        if(i > 0){
            if(count != 26){
                cout << "missing " << missing << endl;
            }
            else{
                cout << "pangram" << endl;
            }
        }
    }
    return 0;
}