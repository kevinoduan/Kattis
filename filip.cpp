#include <iostream>

using namespace std;

int reverse(int in){
    int a, b, c;
    a = in / 100;
    in = in % 100;
    b = in / 10;
    in = in % 10;
    c = in;

    return 100 * c + 10 * b + a;
}

int main(){
    int a, b;

    cin >> a >> b;

    a = reverse(a);
    b = reverse(b);

    cout << max(a,b) << endl;
    return 0;
}