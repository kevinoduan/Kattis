#include <iostream>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    int c = a * (b - 1);
    c += 1;

    cout << c << endl;

    return 0;
}