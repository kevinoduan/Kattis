#include <iostream>

using namespace std;

int main(){
    int caseNum;
    cin >> caseNum;

    for(int i = 0; i<caseNum; ++i){
        int num, N;
        cin >> num >> N;
        int sum = 0;
        for(int j = 0; j<N; ++j){
            sum += j + 1;
        }
        int out1 = sum;
        int out3 = sum * 2;
        int out2 = out3 - N;
        cout << num << " " << out1 << " " << out2 << " " << out3 << endl;
    }
    return 0;
}