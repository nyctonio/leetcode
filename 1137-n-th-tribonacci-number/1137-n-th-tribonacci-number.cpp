class Solution {
public:
    vector<int> m;
    int t(int n) {
        if(n==0)return 0;
        else if(n==1)return 1;
        else if(n==2)return 1;
        int a=m[n-1],b=m[n-2],c=m[n-3];
        if(a==-1)a=t(n-1);
        if(b==-1)b=t(n-2);
        if(c==-1)c=t(n-3);
        m[n]=a+b+c;
        return m[n];
    }
    int tribonacci(int n) {
        vector<int> temp(n+1,-1);
        m=temp;
        return t(n);
    }
};