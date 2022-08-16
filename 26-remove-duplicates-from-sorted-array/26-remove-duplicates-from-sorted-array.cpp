class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(auto i:nums)
            s.insert(i);
        int i=0;
        for(auto j:s){
            nums[i]=j;
            i++;
        }
        // for(auto i:nums){
        //     cout<<i;
        // }
        return nums.size()-(nums.size()-s.size());
    }
};