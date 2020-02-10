#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x1, x2, x3;
    string order;
    vector<int> nums;

    cin >> x1 >> x2 >> x3;
    nums.push_back(x1);
    nums.push_back(x2);
    nums.push_back(x3);
    std::sort(nums.begin(), nums.end());

    cin >> order;
    for(int i = 0; i<3; ++i){
        cout << nums.at(order.at(i) % 65) << " ";
    }
    return 0;
}