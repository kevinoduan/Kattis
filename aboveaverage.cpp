#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int caseNum;

    cin >> caseNum;

    for(int i = 0; i<caseNum; ++i){
        int lineNum;
        int total = 0;
        double average;
        vector<int> grades;
        cin >> lineNum;
        for(int j = 0; j<lineNum; ++j){
            int temp;
            cin >> temp;
            total += temp;
            grades.push_back(temp);
        }
        average = total / lineNum;
        int above  = 0;
        for(int j = 0; j<lineNum; ++j){
            if(grades.at(j) > average){
                above++;
            }
        }
        std::cout << std::setprecision(3) << fixed << 100 * double(above) / lineNum << "%" << endl;
    }
}