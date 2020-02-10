#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N+1; ++i){
        string inp;
        getline(cin, inp);
        istringstream iss(inp);
        std::vector<string> parsed;
        string word;
        while(iss >> word){
            parsed.push_back(word);
            //cout << "Pushed: " << word << endl;
        }
        if(i > 0){
            if(parsed.at(0) == "Simon" && parsed.at(1) == "says"){
                for(int j = 2; j<parsed.size(); ++j){
                    cout << parsed.at(j) << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}