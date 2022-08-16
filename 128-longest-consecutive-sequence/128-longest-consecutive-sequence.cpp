class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int maxlen = 0;
        unordered_set<int> s;
        for(auto i:nums)
            s.insert(i);
        for(int i=0;i<nums.size();i++){
            auto itr = s.find(nums[i]-1);
            if(itr==s.end()){
                int m=1,curr=nums[i];
                // cout<<curr<<endl;
                while(true){
                    auto f = s.find(++curr);
                    if(f!=s.end())
                        m++;
                    else
                        break;
                }
                maxlen=max(m,maxlen);
            }
        }
        return maxlen;
    }
};