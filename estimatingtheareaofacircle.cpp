#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double rad;
    while(cin >> rad){
        int total, in;
        cin >> total >> in;
        if(rad == 0 && total == 0 && in == 0){
            return 0;
        }
        double ratio = (double)in / total;
        double square = pow(rad * 2, 2);
        double out1, out2;
        out2 = ratio * square;
        out1 = pow(rad, 2) * M_PI;
        cout << out1 << " " << out2 << endl;
    }
}