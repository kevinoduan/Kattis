#include <iostream>

using namespace std;

int main(){
    int n, r, e, c;
    cin >> n;

    for(int i = 0; i<n; ++i){
        cin >> r >> e >> c;
        if(r + c > e){
            cout << "do not advertise" << endl;
        }
        else if(r + c == e){
            cout << "does not matter" << endl;
        }
        else{
            cout << "advertise" << endl;
        }
    }
    return 0;
}