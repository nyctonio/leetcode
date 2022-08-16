class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>> m;
        for(int i=0;i<s.length();i++){
            if(m[s[i]].first==0)
                m[s[i]].first=i+1;
            m[s[i]].second++;
        }
        int mn = INT_MAX;
        for(auto i=m.begin();i!=m.end();i++){
            // cout<<i->first<<" "<<i->second.first<<" "<<i->second.second<<endl;
            if(i->second.second==1){
                mn = min(mn,i->second.first); 
            }
        }
        return (mn==INT_MAX?-1:mn-1);
    }
};
