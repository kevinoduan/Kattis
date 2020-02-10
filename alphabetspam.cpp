#include <iostream>

using namespace std;

int main(){
    cout.precision(16);

    string input;
    cin >> input;

    int whitespace = 0;
    int lowercase = 0;
    int uppercase = 0;
    int symbols = 0;

    for(int i =  0; i<input.size(); ++i){
        if(input.at(i) == 95){
            whitespace++;
        }
        else if(input.at(i) >= 65 && input.at(i) <= 90){
            uppercase++;
        }
        else if(input.at(i) >= 97 && input.at(i) <= 122){
            lowercase++;
        }
        else{
            symbols++;
        }
    }

    cout << (double)whitespace/input.size() << endl << (double)lowercase/input.size() << endl << (double)uppercase/input.size() << endl << (double)symbols/input.size() << endl;
    return 0;
}