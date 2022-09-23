class Solution {
public:
    const int MOD = 1'000'000'007;

    int concatenatedBinary(int n) {
        int result = 1;
        for (int i = 2; i <= n; ++ i) {
            multiply(i, result);
        }
        
        return result;
    }
    
    void multiply(int num, int &result) {
        if (num == 0) {
            return;
        }

        multiply(num >> 1, result);
        
        result = (result * 2 + (num & 1)) % MOD;
    }
};