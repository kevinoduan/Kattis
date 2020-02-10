#include <iostream>

using namespace std;

char opTest(int op1, int op2, int outp){
    if(op1 + op2 == outp){
        return '+';
    }
    else if(op1 - op2 == outp){
        return '-';
    }
    else if(op1 / op2 == outp){
        return '/';
    }
    else if(op1 * op2 == outp){
        return '*';
    }
    else{
        return '0';
    }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(opTest(a,b,c) != '0'){
        cout << a << opTest(a,b,c) << b << '=' << c;
    }
    else if(opTest(b,c,a) != '0'){
        cout << a << '=' << b << opTest(b,c,a) << c;
    }
    return 0;
}