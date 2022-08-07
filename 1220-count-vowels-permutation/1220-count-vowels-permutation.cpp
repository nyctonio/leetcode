class Solution {
public:
    
    int countVowelPermutation(int n) { 
        unordered_map<char,long long int> v;
        int sum=0;
        v['a']++;v['e']++;v['i']++;v['o']++;v['u']++;
        if(n==1){
            return 5;
        }
        else{
            for(int i=1;i<n;i++){
                map<char,long long int> sol;
                sol['a']=(v['e']+v['i']+v['u'])%(1000000000+7);
                sol['e']=(v['a']+v['i'])%(1000000000+7);
                sol['i']=(v['o']+v['e'])%(1000000000+7);
                sol['o']=(v['i'])%(1000000000+7);
                sol['u']=(v['o']+v['i'])%(1000000000+7);
                v['a']=sol['a'];v['e']=sol['e'];v['i']=sol['i'];v['o']=sol['o'];v['u']=sol['u'];
            }
        }
        return (v['a']+v['e']+v['i']+v['o']+v['u'])%(1000000000+7);
    }
};