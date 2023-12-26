typedef long long int LLI;
const int MOD = 1e9 + 7;
const int N = 31;
const int M = 1001;

class Solution {
public:
int dp[N][M];
int totalWays(int n, int k, int target) {
if (target > k * n) return 0;
if (n == 1) {
return target <= k ? 1 : 0;
}
if (dp[n][target] > -1) {
return dp[n][target];
}
LLI ans = 0;
for (int i = 0; i <= k && i <= target; i++) {
ans += totalWays(n - 1, k, target - i);
ans %= MOD;
}
dp[n][target] = ans;
return ans;
}
int numRollsToTarget(int n, int k, int target) {
if (n > target) return 0;
memset(dp, -1, sizeof(dp));
return totalWays(n, k-1, target-n);
}
};