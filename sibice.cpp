#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int c = a * a + b * b;
    c = sqrt(c);

    for(int i = 0; i<n; ++i){
        int temp;
        cin >> temp;
        if(temp <= c){
            cout << "DA" << endl;
        }
        else{
            cout << "NE" << endl;
        }
    }
    return 0;
}