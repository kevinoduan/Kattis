#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int left, right;
    string parity;

    cin >> left >> right;
    if(left == right){
        parity = "Even";
    }
    else{
        parity = "Odd";
    }
    if(std::max(left, right) == 0){
        cout << "Not a moose" << endl;
        return 0;
    }
    cout << parity << " " << std::max(left, right) * 2 << endl;
    return 0;
}