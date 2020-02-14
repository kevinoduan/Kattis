#include <iostream>
#include <vector>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;
    for(int i = 0; i<caseNum; ++i){
        int rowNum;
        cin >> rowNum;
        vector<int> nums;
        for(int j = 0; j<rowNum; ++j){
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        for(int j = 1; j<nums.size(); ++j){
            if(nums.at(j) - 1 != nums.at(j-1)){
                cout << ++j << endl;
                break;
            }
        }
    }
}