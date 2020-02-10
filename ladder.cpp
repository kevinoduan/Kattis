#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int h, v;
    cin >> h >> v;

    double out = (double)h / sin(((double)v * M_PI) / 180);
    cout << ceil(out);
    return 0;
}