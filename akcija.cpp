#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int caseNum;
    int savings = 0;
    int total = 0;
    cin >> caseNum;
    vector<int> books;

    for(int i = 0; i<caseNum; ++i){
        int temp;
        cin >> temp;
        books.push_back(temp);
        total += temp;
    }

    std::sort(books.begin(), books.end(), greater<int>());
    for(int i = 2; i<books.size(); i = i+3){
        savings += books.at(i);
    }
    cout << total - savings << endl;
    //cout << "Total: " << total << endl << "Savings: " << savings << endl;
}