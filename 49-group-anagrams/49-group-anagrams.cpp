class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        map<map<char,int>,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            map<char,int> tm;
            for(auto c:strs[i])
                tm[c]++;
            m[tm].push_back(strs[i]);
        }
        for(auto i:m){
            sol.push_back(i.second);
        }
        return sol;
    }
};
