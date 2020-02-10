#include <iostream>

using namespace std;

int main(){
    int base;
    int count;

    cin >> base >> count;
    int total = 0;

    for(int i = 0; i<count; ++i){
        int temp;
        cin >> temp;
        total += temp;
    }

    total = count * base - total + base;
    cout << total;

    return 0;
}