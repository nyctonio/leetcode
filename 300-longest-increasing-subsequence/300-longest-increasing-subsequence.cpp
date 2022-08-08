class Solution {
public:
    int dp[2501];
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,go(i,nums));
        }
        return ans;
    }
    private:
    int go(int idx,vector<int> &nums)
    {
        if(idx == 0)
        {
            return 1;
        }
        if(dp[idx] != -1)
        {
            return dp[idx];
        }
        int lis = 1;
        for(int i=0;i<idx;i++) //search for element less than nums[idx]
        {
            if(nums[i]<nums[idx])
            {
                lis  = max(lis,go(i,nums)+1);
            }
        }
        return dp[idx] = lis;
    }
};