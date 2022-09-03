class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        // using deque
        vector<int>ans;
        for(int i = 1;i<=9;i++){
            deque<int>q;
            q.push_back(i);
            while(!q.empty()){
                int f= q.front();q.pop_front();
                string s= to_string(f);
                if(s.size() == n){
                    ans.push_back(f);
                }
                else{
                    int last = s[s.size()-1]-'0';
                    if(k == 0){
                        q.push_back(f*10+last);
                    }
                    else{
                        if(last+k >=0 && last+k<=9){
                        q.push_back(f*10+last+k);
                    }
                    if(last-k >=0 && last-k <=9){
                        q.push_back(f*10+last-k);
                    }
                    }
                    
                }
            }
        }
        return ans;
    }
};