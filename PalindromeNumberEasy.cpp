class Solution {
public:
    bool isPalindrome(int x) {
        //easy approach: convert to string. compare string.at(i) and string.at(n-1-i)
        // 121 > i = 0, n = 3 > str.at(0)
        string str = to_string(x);
        int n = str.size();
        for(int i=0; i<(n/2); ++i){
            if(str.at(n-1-i) != (str.at(i))){
                return false;
            }
        }
        return true;
    }
}
