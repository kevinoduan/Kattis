#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums;
    vector<int>::iterator it;
    for(int i = 0; i<10; ++i){
        int in;
        cin >> in;
        nums.push_back(in % 42);
    }
    sort(nums.begin(), nums.end());
    it = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(), it));
    cout << nums.size() << endl;
    return 0; 
}