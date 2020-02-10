#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    double total = 0;

    for(int i = 0; i<cases; ++i){
        double temp1, temp2;
        cin >> temp1 >> temp2;
        //cout << temp1 << " " << temp2 << endl;

        total += temp1 * temp2;
    }

    cout << total << endl;
    return 0;
}