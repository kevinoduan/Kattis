#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    string in1, in2;
    cin >> in1 >> in2;
    bool success = true;
    for(int i = 0; i<in1.size(); ++i){
        if(N % 2 == 0){
            if(in1.at(i) != in2.at(i)){
                success = false;
            }
        }
        else{
            if(in1.at(i) == in2.at(i)){
                success = false;
            }
        }
    }
    if(success){
        cout << "Deletion succeeded" << endl;
    }
    else{
        cout << "Deletion failed" << endl;
    }
    return 0;
}