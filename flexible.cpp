#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int width;
    int caseNum;

    cin >> width >> caseNum;
    vector<int> walls;
    vector<int> sizes;
    walls.push_back(0);
    for(int i = 0; i<caseNum; ++i){
        int in;
        cin >> in;
        walls.push_back(in);
    }
    walls.push_back(width);
    int i;
    for(i = 0; i<walls.size(); ++i){
        for(int j = 0; j<i; j++){
            sizes.push_back(walls.at(i) - walls.at(j));
        }
    }
    std::sort(sizes.begin(), sizes.end());
    vector<int>::iterator it;
    it = std::unique(sizes.begin(), sizes.end());
    sizes.resize(std::distance(sizes.begin(), it));
    for(int i = 0; i<sizes.size(); ++i){
        cout << sizes.at(i) << " ";
    }
}