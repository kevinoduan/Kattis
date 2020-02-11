#include <iostream>
#include <map>

using namespace std;

int main(){
    map<char, int> teams;
    int in;
    char prob;
    string result;
    int total = 0;
    int correct = 0;
    while(cin >> in){
        if(in == -1){
            cout << correct << ' ' << total << endl;
            return 0;
        }
        else{
            cin >> prob >> result;
            if(result == "right"){
                total += teams[prob];
                total += in;
                correct++;
            }
            else{
                teams[prob] += 20;
            }
        }
    }
}