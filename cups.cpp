#include <iostream>
#include <map>

using namespace std;

int main(){
    int caseN;
    string in, in2;
    cin >> caseN;
    int half = 1;

    map<int, string> colors;
    
    for(int i = 0; i<caseN; ++i){
        half = 1;
        cin >> in;
        cin >> in2;
        for(int i = 0; i<in.size(); ++i){
            if(isdigit(in.at(i)) == 0){
                half = 0;
            }
        }
        int val;
        string color;
        if(half){
            val = stoi(in) / 2;
            color = in2;
        }
        else{
            val = stoi(in2);
            color = in;
        }
        colors[val] = color;
    }
    for(auto it = colors.cbegin(); it != colors.cend(); ++it)
    {
        std::cout << it->second << endl;
    }
}