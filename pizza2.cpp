#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int R, C;
    cin >> R >> C;

    double out = (double)((R-C) * (R-C)) / (double)(R*R);
    out *= 100;
    cout << setprecision(10);
    cout << out << endl;
    return 0;
}