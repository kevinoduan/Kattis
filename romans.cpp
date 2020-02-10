#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    double inp;
    cin >> inp;

    inp = (inp * 1000.0 * 5280.0) / 4854.0 + 0.5;
    int out = floor(inp);
    cout << out << endl;
    return 0;
}