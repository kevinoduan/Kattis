#include <iostream>

using namespace std;

int main(){

    int base = 2;
    int in;
    std::cin >> in;

    for (int i = 0; i<in; ++i){
        base = base * 2 - 1;
    }

    base = base * base;
    cout << base << endl;
    return 0;

}