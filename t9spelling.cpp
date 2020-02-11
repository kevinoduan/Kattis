#include <iostream>
#include <map>

using namespace std;

int main(){
    map<char, string> conversion;
    conversion['a'] = "2";
    conversion['b'] = "22";
    conversion['c'] = "222";
    conversion['d'] = "3";
    conversion['e'] = "33";
    conversion['f'] = "333";
    conversion['g'] = "4";
    conversion['h'] = "44";
    conversion['i'] = "444";
    conversion['j'] = "5";
    conversion['k'] = "55";
    conversion['l'] = "555";
    conversion['m'] = "6";
    conversion['n'] = "66";
    conversion['o'] = "666";
    conversion['p'] = "7";
    conversion['q'] = "77";
    conversion['r'] = "777";
    conversion['s'] = "7777";
    conversion['t'] = "8";
    conversion['u'] = "88";
    conversion['v'] = "888";
    conversion['w'] = "9";
    conversion['x'] = "99";
    conversion['y'] = "999";
    conversion['z'] = "9999";
    conversion[' '] = "0";

    int caseNum;
    cin >> caseNum;
    cin.ignore (std::numeric_limits<streamsize>::max(), '\n');
    
    for(int i = 0; i<caseNum; ++i){
        string in;
        getline(cin, in);
        //cin >> in;
        cout << "Case #" << i+1 << ": ";
        for(int j = 0; j<in.size()-1; ++j){
            //cout << conversion[in.at(i)].at(0) << conversion[in.at(i+1)].at(0);
            if(conversion[in.at(j)].at(0) == conversion[in.at(j+1)].at(0)){
                cout << conversion[in.at(j)] << " ";
                //cout << in.at(j) << " ";
            }
            else{
               cout << conversion[in.at(j)];
               //cout << in.at(j);
            }
        }
        cout << conversion[in.at(in.size()-1)];
        //cout << in.at(in.size()-1);
        cout << endl;
    }
    return 0;
}