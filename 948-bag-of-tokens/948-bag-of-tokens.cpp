class Solution {
public:
	int bagOfTokensScore(vector<int>& token, int power) {
		if(token.size()==0)return 0;
		sort(token.begin(),token.end());
		int ans = 0,t=0;
		int i=0,j=token.size()-1;
		while(i<j){
			if(power>=token[i]){
				power -= token[i];
				i+=1;
				t += 1;
			}
			else{
				if(t>0){
					power += token[j];
					j-=1;
					t-=1;
				}
				else break;
			}
			ans = max(ans,t);
		}
		if(power>=token[i]){
			t += 1;
			ans = max(t,ans);
		}
		return ans;
	}
};