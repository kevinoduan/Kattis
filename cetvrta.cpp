#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int outx, outy;
    vector <int> xvals;
    vector <int> yvals;

    for(int i = 0; i<3; ++i){
        int tempx, tempy;
        cin >> tempx >> tempy;
        xvals.push_back(tempx);
        yvals.push_back(tempy);
    }
    sort(xvals.begin(), xvals.end());
    sort(yvals.begin(), yvals.end());
    if(xvals.at(0) == xvals.at(1)){
        outx = xvals.at(2);
    }
    else if (xvals.at(1) == xvals.at(2)){
        outx = xvals.at(0);
    }
    else{
        outx = xvals.at(1);
    }
    if(yvals.at(0) == yvals.at(1)){
        outy = yvals.at(2);
    }
    else if (yvals.at(1) == yvals.at(2)){
        outy = yvals.at(0);
    }
    else{
        outy = yvals.at(1);
    }
    cout << outx << " " << outy << endl;
    return 0;
}