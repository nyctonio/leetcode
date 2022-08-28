class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        const int size = mat.size();
        
        //sort the first column start positions
        for(int x = 0; x<size; x++){
            vector<int> vals; 
            int startX = x; 
            int startY = 0; 
            while(startX<mat.size() and startY < mat[startX].size()){
                vals.push_back(mat[startX++][startY++]);
            }
            // sort the vector 
            sort(vals.begin(), vals.end());
            
            // push them back 
            int counter = 0; 
            startX = x; 
            startY = 0; 
             while(startX<mat.size() and startY < mat[startX].size()){
                mat[startX++][startY++] = vals[counter++];
            }
        }
        
        const int colSize = mat[0].size(); 
        //Increment column instead of row for top row
        for(int y = 1; y<colSize; y++){
            vector<int> vals; 
            int startX = 0; 
            int startY = y; 
            while(startX<mat.size() and startY < mat[startX].size()){
                vals.push_back(mat[startX++][startY++]);
            }
            // sort the vector 
            sort(vals.begin(), vals.end());
            
            // push them back 
            int counter = 0; 
            startX = 0; 
            startY = y; 
             while(startX<mat.size() and startY < mat[startX].size()){
                mat[startX++][startY++] = vals[counter++];
            }
        }
        
        return mat; 
    }
};