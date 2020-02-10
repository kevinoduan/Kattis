#include <iostream>

using namespace std;

int main(){
    int cases;

    cin >> cases;
    for(int i = 0; i<cases; ++i){
        double b, p;
        cin >> b >> p;

        double minABPM, ABPM, maxABPM;

        ABPM = 60 * b / p;
        minABPM = ABPM - (ABPM / b);
        maxABPM = ABPM + (ABPM / b);

        cout << minABPM << " " << ABPM << " " << maxABPM << endl;
    }

    return 0;
}