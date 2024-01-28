class Solution {
public:
    bool isPalindrome(int x) {
        //Harder approach: keep as int but use modulus to compare. rather than using .at operator, using % instead
        if(x < 0){
            return false;
        }
        int n = 1;
        int temp = x;
        while (temp >= 10){
            temp = temp/10;
            n++;
        }
        for(int i = 0; i<n/2; ++i){
            int temp2 = x/pow(10,(n-1-i));
            int temp3 = x/pow(10,i);
            if((int) temp2 % 10 != ((int) temp3 % 10)){
                return false;
            }
        }
        return true;
    }
};
