class Solution {
public:
    string largestOddNumber(string num) {
        int j=num.size()-1;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]%2)
            return num.substr(0,j+1);
            else
            {
                j--;
            }
        }
        return "";
    }
};