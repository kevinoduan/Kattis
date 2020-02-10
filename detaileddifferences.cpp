#include <iostream>

using namespace std;

int main(){
    int caseNum;

    cin >> caseNum;
    
    for(int i = 0; i<caseNum; ++i){
        string comp1, comp2;

        cin >> comp1 >> comp2;
        cout << comp1 << endl << comp2 << endl;
        for(int j = 0; j < comp1.size(); ++j){
            if(comp1.at(j) == comp2.at(j)){
                cout << ".";
            }
            else{
                cout << "*";
            }
        }
        cout << endl << endl;
    }
}