#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){
    int r, n;
    cin >> r >> n;
    if(r == n){
        cout << "too late" << endl;
        return 0;
    }
    if(n == 0){
        cout << "1" << endl; //case where no rooms booked. results in empty vect
        return 0;
    }
    else{
        vector<int> rooms;
        for(int i = 0; i<n; ++i){
            int temp;
            cin >> temp;
            rooms.push_back(temp);
        }
        sort(rooms.begin(), rooms.end());   //empty vec causes RTE here
        for(int i = 0; i<rooms.size()-1; ++i){
            if(rooms.at(i) + 1 != rooms.at(i+1)){
                cout << rooms.at(i) + 1 << endl;
                return 0;
            }
        }
        cout << rooms.at(rooms.size()-1) + 1 << endl;
        return 0;
    }
    return 0;
}