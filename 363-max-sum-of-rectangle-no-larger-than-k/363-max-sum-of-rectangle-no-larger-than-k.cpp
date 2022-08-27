class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int K) {
        // Calculating prefixsum
        int m = matrix.size();
        int n = matrix[0].size();
        int arr[m+1][n+1];
        memset(arr,0,sizeof(arr));
         for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
               arr[i][j] = matrix[i-1][j-1]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
            }
         }
        int ans = INT_MIN;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=i;k++)
                {
                  for(int l=1;l<=j;l++)
                  {
                     int temp = arr[i][j]-arr[k-1][j]-arr[i][l-1]+arr[k-1][l-1];
                     
                      if(temp<=K)
                      ans = max(ans,temp);
                      if(ans==K)return ans;
                     
                  }
                }
            }
        } 
     return ans;
    }
};