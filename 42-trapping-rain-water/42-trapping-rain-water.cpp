class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> maxL(n),maxR(n);
        int currL=0,currR=0;
        for(int i=0;i<n;i++){
            maxL[i] = currL;
            currL = max(maxL[i],height[i]);
        }
        for(int i=n-1;i>=0;i--){
            maxR[i] = currR;
            currR = max(maxR[i],height[i]);
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            if(min(maxL[i],maxR[i])-height[i]>=0)
                sum+=min(maxL[i],maxR[i])-height[i];
        }
        return sum;
    }
};