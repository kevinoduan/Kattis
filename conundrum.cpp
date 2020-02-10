#include <iostream>

using namespace std;

int main(){
    string input;
    int count = 0;

    cin >> input;

    for(int i = 0; i<input.size(); ++i){
        switch (i % 3){
            case 0: 
                if(input.at(i) == 'P'){
                    break;
                }
                else{
                    count++;
                }
                break;
            case 1:
                if(input.at(i) == 'E'){
                    break;
                }
                else{
                    count++;
                }
                break;
            case 2:
                if(input.at(i) == 'R'){
                    break;
                }
                else{
                    count++;
                }
                break;
        }
    }
    cout << count << endl;
    return 0;
}