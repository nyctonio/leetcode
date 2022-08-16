class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int longest = 1, prev=nums[0],m=1;
        for(int i=1;i<nums.size();i++){
            cout<<nums[i]<<" "<<prev<<endl;
            if(nums[i]-1==prev)
                m++;
            else if(nums[i]==prev)
                m=m;
            else{
                longest=max(longest,m);
                m=1;
            }
            prev=nums[i];
        }                
        return max(longest,m);
    }
};