#include <iostream>

using namespace std;

int charToInt(char input){
    if(input == 'A'){
        return 11;
    }
    else if(input == 'K'){
        return 4;
    }
    else if(input == 'Q'){
        return 3;
    }
    else if(input == 'J'){
        return 2;
    }    
    else if(input == 'T'){
        return 10;
    }    
    else if(input == '9'){
        return 0;
    }    
    else{
        return 0;
    }

}

int main(){

    char suite;
    int count = 0;
    int total, domVal, nonVal;
    total = 0;
    cin >> count >> suite;

    for(int i = 0; i < count * 4; ++i){
        string temp;
        cin >> temp;
        if(temp.at(1) == suite && temp.at(0) == 'J'){
            total += 20;
        }
        else if(temp.at(1) == suite && temp.at(0) == '9'){
            total += 14;
        }
        else{
            total += charToInt(temp.at(0));
        }
    }

    cout << total;
    return 0;

}

