#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;

    for(int i = 0; i<cases; ++i){
        int temp;
        cin >> temp;

        if(temp % 2 == 0){
            cout << temp << " is even" << endl;
        }
        else{
            cout << temp << " is odd" << endl;
        }
    }
    return 0;
}