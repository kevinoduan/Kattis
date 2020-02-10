#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, mainmin;
    mainmin = 999999;
    cin >> N;
    int arr[N];
    for(int i = 0; i<N; ++i){
        int temp;
        cin >> temp;

        arr[i] = temp;
    }
    int M;
    cin >> M;
    int top[M];
    for(int i = 0; i<M; ++i){
        int temp;
        cin >> temp;

        top[i] = temp;
    }
    //cout << "line 26" << endl;
    for(int i = 0; i<N; ++i){
        int K;
        cin >> K;

        for(int j = 0; j<K; ++j){
            int in;
            cin >> in;
            if(top[in - 1] + arr[i] < mainmin){
                mainmin = top[in - 1] + arr[i];
            }
        }
    }
    //cout << mainmin << endl;
    int money;
    cin >> money;
    int out = money / mainmin - 1;
    if(out > 0){
        cout << out << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}