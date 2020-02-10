#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double factor;
    int caseNum;
    double total = 0;

    cin >> factor >> caseNum;
    
    for(int i = 0; i<caseNum; ++i){
        double x, y;
        cin >> x >> y;
        total += x * y;
    }
    total *= factor;
    cout << fixed << setprecision(7) <<total;

    return 0;
}