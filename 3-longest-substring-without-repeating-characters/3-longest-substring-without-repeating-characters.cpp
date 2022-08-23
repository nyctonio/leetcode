class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        int m=1,mx=0;
        int a=0,b=1;
        vector<int> arr(128,-1);
        // int arr[128]={-1};
        arr[s[a]-0]=0;
        while(b<s.length()){
            cout<<a<<" "<<b<<" "<<s[b]<<" "<<arr[s[b]-0];
            if(arr[s[b]-0]<b && arr[s[b]-0]!=-1 && arr[s[b]-0]>=a){
                cout<<"i";
                mx=max(mx,(b-a));
                a=arr[s[b]-0]+1;
                arr[s[b]-0]=b;
            }
            else{
                cout<<"e";
                arr[s[b]-0]=b;
            }
            cout<<endl;
            b++;
        }
        mx=max(mx,(b-a));
        return mx;
    }
};