#include <iostream>

using namespace std;

int main(){
    string input;

    cin >> input;
    int arr[3] = {1, 0, 0};

    for(int i = 0; i<input.length(); ++i){
        if(input.at(i) == 'A'){
            int temp = arr[1];
            arr[1] = arr[0];
            arr[0] = temp;
        }
        else if(input.at(i) == 'B'){
            int temp = arr[2];
            arr[2] = arr[1];
            arr[1] = temp;
        }
        else if(input.at(i) == 'C'){
            int temp = arr[2];
            arr[2] = arr[0];
            arr[0] = temp;
        }
    }
    for(int i = 0; i<3; ++i){
        if(arr[i] == 1){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 1;

}