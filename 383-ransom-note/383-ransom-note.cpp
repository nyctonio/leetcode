class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r[26]={0},m[26]={0};
        for(char i:ransomNote)
            r[i-97]++;
        for(char i:magazine)
            m[i-97]++;
        for(int i=0;i<26;i++){
            // cout<<r[i]<<" "<<m[i]<<endl;
            if(r[i]<=m[i])
                continue;
            else
                return false;
        }
        return true;
    }
};