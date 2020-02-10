#include <iostream>
#include <vector>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;

    for(int i = 0; i < caseNum; ++i){
        vector <int> turtles;
        int outp = 0;
        while (true){
            int pop;
            cin >> pop;
            if(pop == 0){
                break;
            }
            turtles.push_back(pop);
        }
        for(int j = 0; j<turtles.size()-1; ++j){
            if(turtles.at(j+1) > (2 * turtles.at(j))){
                outp += turtles.at(j+1) - 2 * turtles.at(j);
            }
        }
        cout << outp << endl;
    }
    return 0;
}