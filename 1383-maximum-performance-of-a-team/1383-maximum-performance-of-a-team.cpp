#define ll long long int
ll mod=1e9+7;
class Solution {
public:
    int maxPerformance(int n, vector<int>& a, vector<int>& b, int k) {
        vector<pair<ll,ll>>vp;
        for(int i=0;i<n;i++)vp.push_back({b[i],a[i]});
        sort(vp.rbegin(),vp.rend());
        multiset<ll>ms;
        ll ans=0,sum=0;
        for(auto c:vp)
        {
            if(ms.size()==k)
            {
                sum-=*ms.begin();
                ms.erase(ms.begin());
            }
            sum+=c.second;
            ms.insert(c.second);
            ans=max(ans,c.first*sum);
        }
        return ans%mod;
    }
};