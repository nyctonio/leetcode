// class Solution {
// public:
//     int minSetSize(vector<int>& arr) {
//         int half=arr.size()/2;
//         unordered_map<int,int> m;
//         for(auto i:arr)
//             m[i]++;
//         vector<pair<int,int>> v;
//         for(auto i:m)
//             v.push_back({i.second,i.first});
//         sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
//             return a.first>b.first;
//         });
//         int s=0,c=1;
//         for(auto i:v)
//             cout<<i.first<<" "<<i.second<<endl;
//         return 4;
//     }
// };



class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        for(auto x: arr)
            mp[x]++;
        
        // storing all frequencies in multiset
        multiset<int> st;
        for(auto p: mp)
            st.insert(p.second);
        
        int size = n, cnt = 0;
		// used to count steps, to iterate multiset
        int m = st.size();
        
        // we can iterate over multiset set cause this is sorted
        auto it = st.end();         // point to out of bound
        // iterator of set will start from last element (this is maximum)
        it--;
		
        for( ; m > 0; it--)
        {
            size -= *it;
            cnt++;
            
            if(size <= n/2)
                return cnt;
            m--;
        }     
        return cnt;
    }
};