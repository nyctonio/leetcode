class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return {};
        vector<int> v(n);
        v[0]=1;
        for(int i=1;i<n;i++){
            v[i]=v[i-1]*nums[i-1];
        }
        for(auto i:v){
            cout<<i<<" ";
        }
        int p=1;
        for(int i=n-1;i>=0;i--){
            v[i]*=p;
            p*=nums[i];
        }
        return v;
    }
};



// 1  1  2 6
// 24 12 4 1
