#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<n;i++){
            int val1 = cost[i]+dp[i-1];
            int val2 = cost[i]+dp[i-2];
            dp[i]=min(val1,val2);
        }
        return min(dp[n-1],dp[n-2]);
    }
};