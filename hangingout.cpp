#include <iostream>

using namespace std;

int main(){
    int max, caseNum;
    cin >> max >> caseNum;
    int count = 0;
    int out = 0;

    for(int i = 0; i<caseNum; ++i){
        string in1;
        int temp;
        cin >> in1 >> temp;

        if(in1 == "enter"){
            if(count + temp > max){
                out++;
            }
            else{
                count = count + temp;
            }
        }
        else{
            count = count - temp;
        }
    }
    cout << out << endl;
}