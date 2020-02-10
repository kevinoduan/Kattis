#include <iostream>

int main(){
    int caseNum;
    double num = 0;

    std::cin >> caseNum;

    double denom = (int)caseNum;


    for(int i = 0; i<caseNum; ++i){
        double bat;
        std::cin >> bat;

        if(bat == -1){
            denom--;
        }
        else{
            num += bat;
        }
    }
    std::cout << num / denom << std::endl;
    return 0;
}