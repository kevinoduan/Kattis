class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // To prevent out of bounds errors, establish a minimum length equal to shortest string in the vector
        int length = 200;
        for(int i = 0; i<strs.size(); ++i){
            if(strs.at(i).size() < length){
                length = strs.at(i).size();
            }
        }

        // Nested for loops. Ititerate through strings.at(i) until length is reached and check all are equal

        string output = "";
        for(int i = 0; i<length; ++i){
            char temp = strs.at(0).at(i);
            for(int j = 0; j<strs.size(); ++j){
                if(strs.at(j).at(i) != temp){
                    return output;
                }
            }
            output += temp;
        }
        return output;
    }
};
