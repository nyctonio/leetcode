class Solution {
public:
    string reverseWords(string s) {
        int i=0; 
        int j=s.find(' ')-1;
        while(j<s.size()){
            cout<<j<<" ";
            int t=j;
            while(i<t){
                swap(s[i],s[t]);
                i++;
                t--;
            }
            j+=2;
            i=j;
            cout<<" "<<i<<" "<<j<<endl;
            j=s.find(' ',j)-1;
        }
        j=s.size()-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};