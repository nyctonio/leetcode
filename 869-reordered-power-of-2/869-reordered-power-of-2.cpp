class Solution {
public:
    bool check(int temp[],long long n){
        int arr[10];
        for(int i=0;i<10;i++)
            arr[i]=temp[i];
        while(n>0){
            // cout<<n%10<<" "<<arr[n%10]<<endl;
            arr[n%10]--;
            n/=10;
        }   
        // cout<<endl;
        for(int i=0;i<10;i++){
            if(arr[i]==0)
                continue;
            return false;
        }
        return true;
    }
    bool reorderedPowerOf2(int n) {
        if(n==1)
            return true;
        int l = log10(n) + 1;
        int m[10]={0};
        while(n>0){
            m[n%10]++;
            n/=10;
        }
        long long p = 1,lp = 1;
        while(lp<=l){
            p*=2;
            lp = log10(p)+1;
            if(lp==l){
                if(check(m,p))
                    return true;
            }
        }               
        return false;
    }
};