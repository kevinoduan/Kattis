#include <iostream>

using namespace std;

int main(){
    while(true){
        int n;
        cin >> n;
        if( n == -1){
            return 0;
        }
        else{
            int distance = 0;
            int cTime = 0;
            for(int i = 0; i<n; ++i){
                int speed, time;
                cin >> speed >> time;
                time -= cTime;
                cTime += time;
                distance += speed * time;
            }
            cout << distance << " miles" << endl;
        }
    }
}