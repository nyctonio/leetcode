class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        int a=0,b=1,mx=0;
        vector<int> arr(128,-1);
        arr[s[a]-0]=0;
        while(b<s.length()){
            if(arr[s[b]-0]<b && arr[s[b]-0]!=-1 && arr[s[b]-0]>=a){
                mx=max(mx,(b-a));
                a=arr[s[b]-0]+1;
                arr[s[b]-0]=b;
            }
            else{
                arr[s[b]-0]=b;
            }
            b++;
        }
        mx=max(mx,(b-a));
        return mx;
    }
};