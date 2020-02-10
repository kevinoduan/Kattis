#include <iostream>

using namespace std;

string isPossible(int a, int b, int c){
    if(a + b == c || a * b == c || abs(a-b) == c || a * c == b || b * c == a){
        return "Possible";
    }
    else{
        return "Impossible";
    }
}

int main(){
    int caseNum;
    cin >> caseNum;
    for(int i = 0; i<caseNum; ++i){
        int a,b,c;
        cin >> a >> b >> c;
        cout << isPossible(a,b,c)<<endl;
    }
    return 0;
}