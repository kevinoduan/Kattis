#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int caseNum;
    int cityNum;

    cin >> caseNum;

    for(int i = 0; i<caseNum; ++i){
        cin >> cityNum;
        vector<string> cities;
        for(int j = 0; j<cityNum; ++j){
            string city;
            cin >> city;
            cities.push_back(city);
        }
        sort(cities.begin(), cities.end());
        int result = cities.size();
        for(int j = 0; j<cities.size()-1; ++j){
            if(cities.at(j) == cities.at(j+1)){
                result--;
            }
        }
        cout << result << endl;
        //alternative to the last for loop is to use the unique function to remove duplicates
    }
    return 0;
}