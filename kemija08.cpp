#include <iostream>

using namespace std;

int main(){
    string input;
    getline(cin, input);

    for(int i = 0; i<input.size(); ++i){
        if(input.at(i) == 'a' || input.at(i) == 'e' || input.at(i) == 'i' || input.at(i) == 'o' || input.at(i) == 'u'){
            input.erase((i + 1), 2);
        }
    }
    cout << input << endl;
    return 0;
}