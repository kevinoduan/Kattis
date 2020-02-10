#include <iostream>

using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        if(x == 0 && y == 0){
            return 0;
        }
        int z = 0;
        while(x >= y){
            x -= y;
            z++;
        }
        cout << z << " " << x << " / " << y << endl;
    }
    return 0;
}