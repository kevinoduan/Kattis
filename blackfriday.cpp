//bit of an awkward solution. Originally return the dice roll instead of index
//rather than rewrite, I just added a map to store the indices

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int lineNum;
    vector<int> nums;
    map<int, int> index;

    cin >> lineNum;

    if(lineNum == 1){
        int temp;
        cin >> temp;
        cout << "1";
        return 0;
    }

    for(int i = 0; i<lineNum; ++i){
        int temp;
        cin >> temp;
        nums.push_back(temp);
        index[temp] = i + 1;
    }
    sort(nums.begin(), nums.end());
    if(nums.at(nums.size()-1) != nums.at(nums.size() - 2)){
        //cout << nums.at(nums.size()-1);
        cout << index[nums.at(nums.size()-1)];
        return 0;
    }
    else{
        for(int i = nums.size()-2; i>0; --i){
            if(nums.at(i) != nums.at(i+1) && nums.at(i) != nums.at(i-1)){
                //cout << nums.at(i);
                cout << index[nums.at(i)];
                return 0;
            }
        }
    }
    if(nums.at(0) != nums.at(1)){
        //cout << nums.at(0) << endl;
        cout << index[nums.at(0)];
        return 0;
    }
    cout << "none";
    return 0;
}