class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 0;
        int s=0,e=1;
        while(e<prices.size()){
            if(prices[e]>prices[s])
                m=max(m,(prices[e]-prices[s]));
            else
                s=e;
            e++;
        }
        return m;
    }
};


//      7 1 5 3 6 4
//      