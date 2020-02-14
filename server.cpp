#include <iostream>

using namespace std;

int main(){
    int n, T;
    cin >> n >> T;
    int total = 0;
    for(int i = 0; i<n; ++i){
        int temp;
        cin >> temp;
        total += temp;
        if(total > T){
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}