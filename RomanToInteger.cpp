class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int M = 1000;
        int D = 500;
        int C = 100;
        int L = 50;
        int X = 10;
        int V = 5;
        int I = 1;

        // total += s.at(s.size() - 1);
        s += " ";
        for(int i = s.size()-1; i>= 0; --i){
            if(s.at(i) == 'M'){
                total += 1000;
            }
            if(s.at(i) == 'D'){
                total += 500;
            }
            if(s.at(i) == 'C'){
                if(s.at(i+1) == 'D' || s.at(i+1) == 'M'){
                    total -= 100;
                }
                else{
                    total += 100;
                }
            }
            if(s.at(i) == 'L'){
                total += 50;
            }
            if(s.at(i) == 'X'){
                if(s.at(i+1) == 'L' || s.at(i+1) == 'C'){
                    total -= 10;
                }
                else{
                    total += 10;
                }
            }
            if(s.at(i) == 'V'){
                total += 5;
            }
            if(s.at(i) == 'I'){
                if(s.at(i+1) == 'V' || s.at(i+1) == 'X'){
                    total -= 1;
                }
                else{
                    total += 1;
                }
            }
        }
        return total;
    }
};
