#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int caseCount = 0;
    int lineNum;
    while(cin >> lineNum){
        caseCount++;
        vector<int> nums;
        for(int i = 0; i<lineNum; ++i){
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end());
        cout << "Case " << caseCount << ": " << nums.at(0) << " " << nums.at(nums.size() - 1) << " " << nums.at(nums.size()-1) - nums.at(0) << endl;
    }
    return 0;
}