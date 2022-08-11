class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        for(int i=0;i<nums.size();i++){
            p=p*nums[i];
        }
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v.push_back(p/nums[i]);
                continue;
            }
            int ps=1;
            for(int j=0;j<nums.size();j++){
                if(j!=i)
                    ps*=nums[j];
            }
            v.push_back(ps);
        }
        return v;
    }
};