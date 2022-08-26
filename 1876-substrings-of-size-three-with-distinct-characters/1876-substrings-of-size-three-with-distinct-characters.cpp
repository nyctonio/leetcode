class Solution {
public:
    bool helper(int m[]){
        for(int i=0;i<26;i++){
            if(m[i]<=1)
                continue;
            return false;
        }
        return true;
    }
    int countGoodSubstrings(string s) {
        int l = s.length();
        if(l<3)
            return 0;
        int m[26]={0};
        int i=0,j=0,count=0;
        while(j<l){
            if(j-i+1<=3){
                m[s[j]-97]++;
                j++;
            }
            else{
                // cout<<
                if(helper(m))
                    count++;
                m[s[j]-97]++;
                m[s[i]-97]--;
                i++;
                j++;
            }
        }
        if(helper(m))
            count++;
        return count;
    }
};