#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;

    for(int i = 0; i<caseNum; ++i){
        double v0, theta, x1, h1, h2;
        cin >> v0 >> theta >> x1 >> h1 >> h2;
        theta *= M_PI/180;
        double t = x1/(v0 * cos(theta));
        double y = (v0 * t * sin(theta)) - (0.5 * 9.81 * pow(t,2));
        h1++;
        h2--;
        if(y >= h1 && y <= h2){
            cout << "Safe" << endl;
        }
        else{
            cout << "Not Safe" << endl;
        }
    }
    return 0;
}