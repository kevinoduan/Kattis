#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    long long int area;

    cin >> area;
    cout << std::setprecision(15);
    double side = sqrt(area);
    double out = 4.0 * side;
    cout << out;
    return 0;
}