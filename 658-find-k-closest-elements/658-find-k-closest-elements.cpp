class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;
        for(auto e:arr){
            if(k!=0){
                pq.push({abs(x-e),e});
                k--;
            }
            else{
                if(abs(x-e)<pq.top().first){
                    pq.pop();
                    pq.push({abs(x-e),e});
                }
            }
        }
        vector<int>ans;
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};