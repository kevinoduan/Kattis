#include <iostream>
#include <math.h>

int main(){

    int in;
    int out = 0;

    std::cin >> in;
    for(int i = 0; i<in; ++i){
        int tempIn;
        std::cin >> tempIn;

        int tempPow = tempIn % 10;
        int tempBase = (tempIn - tempPow) / 10;
        out += pow(tempBase, tempPow);
    }

    std::cout << out;


}