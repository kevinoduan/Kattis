#include <iostream>

int main(){
    double side, cut1, cut2;
    std::cin>>side;

    std::cin>>cut1;
    std::cin>>cut2;

    double mid = (double)side / 2;
    if(cut1 < mid){
        cut1 = side - cut1;
    }
    if(cut2 < mid){
        cut2 = side - cut2;
    }

    int out = cut1 * cut2 * 4;
    std::cout << out << std::endl;
}