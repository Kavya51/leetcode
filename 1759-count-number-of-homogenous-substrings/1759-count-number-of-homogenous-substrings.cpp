class Solution {
    int mod=1e9+7;
public:
    int countHomogenous(string s) {
        long long res = 0;
        int start = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != s[start]) {
                int appear = i - start;
                while (appear > 0) {
                    res += appear;
                    appear--;
                }
                start = i;
            }
        }

        int appear = s.size() - start;
        while (appear > 0) {
            res += appear;
            appear--;
        }

        //return static_cast<int>(res % (1000000007));
        return res%mod;
    }
};