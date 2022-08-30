// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<((n+1)/2);j++){
//                 if(matrix[i][j]!=matrix[i][n-j-1]){
//                     matrix[i][j]=matrix[i][n-j-1]+matrix[i][j];
//                     matrix[i][matrix.size()-j-1]=matrix[i][j]-matrix[i][n-j-1];
//                     matrix[i][j]=matrix[i][j]-matrix[i][n-j-1];
//                 }  
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n-i;j++){
//                 if(i!=j){
//                     if(matrix[i][j]!=matrix[n-i-1][n-j-1]){
//                         matrix[i][j]=matrix[n-i-1][n-j-1]+matrix[i][j];
//                         matrix[n-i-1][n-j-1]=matrix[i][j]-matrix[n-i-1][n-j-1];
//                         matrix[i][j]=matrix[i][j]-matrix[n-i-1][n-j-1];
//                     } 
//                 }else{
//                     if(matrix[i][j]!=matrix[j][i]){
//                         matrix[i][j]=matrix[j][i]+matrix[i][j];
//                         matrix[j][i]=matrix[i][j]-matrix[j][i];
//                         matrix[i][j]=matrix[i][j]-matrix[j][i];
//                     } 
//                 }
//             }
//         }
//         for(auto i:matrix){
//             for(auto j:i)
//                 cout<<j<<" ";
//             cout<<endl;
//         }
//     }
// };

class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i=0; i<n; i++)  
    {
        for (int j=0; j<i; j++)
        {  // Transpose the given matrix..
            swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i=0; i<n; i++)
    {   //  reverse each row of matrix..
        reverse(mat[i].begin(), mat[i].end());
    }
}
};





