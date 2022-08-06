class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums){
            if(m[i]>1){
                return true;
            }
            m[i]++;
        }
        for(auto itr=m.begin(); itr != m.end(); itr++){
            if(itr->second>1)
                return true;
        }
        return false;
    }
};