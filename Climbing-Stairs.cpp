class Solution {
public:
    int climbStairs(int n) {
       vector<int> dp(n + 1, -1);
        function<int(int)> fun = [&](int x){
            if(x == n) return 1;
            if(x > n) return 0;
            if(dp[x] != -1) return dp[x];
            return dp[x] = fun(x + 1) + fun(x + 2);
        };
        return fun(0);
    }
};