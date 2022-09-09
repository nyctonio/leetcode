class Solution {
public:
    static bool sorted(vector<int> &a, vector<int> &b) {
        if(a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(), sorted);
        int count = 0;
        int maxDefense = INT_MIN;
        for(int i = arr.size()-1; i >= 0; i--) {
            if(arr[i][1] < maxDefense) {
                count++;
            }
            else{
                maxDefense = arr[i][1];
            }
        }
        return count;
    }
};