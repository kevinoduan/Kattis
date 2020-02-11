#include <iostream>

using namespace std;

int main(){
    int A = 1, B = 0;
    int K;
    cin >> K;
    for(int i = 0; i<K; ++i){
        int oldA = A;
        A = B;
        B += oldA;
        //A += B;
    }
    cout << A << " " << B;
}