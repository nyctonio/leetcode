class Solution {
public:
    bool comp(pair<int,int> a,pair<int,int> b){
        return a.second>b.second;   
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        
        vector<pair<int,int>> v;
        for(auto itr=m.begin();itr!=m.end();itr++){
            v.push_back({itr->second,itr->first});
        }
        sort(v.begin(),v.end());
        for(auto i:v){
            cout<<i.first<<" "<<i.second<<endl;
        }
        vector<int> sol;
        int i=v.size()-1;
        while(k--){
            sol.push_back(v[i].second);
            i--;
        }
        return sol;
    }
};