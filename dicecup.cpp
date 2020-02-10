#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b;

    if(a < b){
        c = a + 1;
        d = b + 1;
    }
    else{
        c = b + 1;
        d = a + 1;
    }

    for(int i = c ; i < d + 1; ++i){
        cout << i << endl;
    }

    return 0;
}