#include <iostream>

using namespace std;

int main(){
    int S; 
    cin >> S;
    cout << S << ":" << endl;

    for(int i = 2; i<S; ++i){
        if(S % (2*i-1) == 0){
            cout << i << "," << i-1 << endl;
        }
        if(((S - i) % (2 * i - 1)) == 0){
            cout << i << "," << i-1 << endl;
        }
        if(S % i == 0){
            cout << i << "," << i << endl;
        }
    }
    return 0;
}