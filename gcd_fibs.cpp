#include<bits/stdc++.h>
using namespace std;


int dp[1000001];


int gcd(int x, int y){
    if(x==0){
        return y;
    }
    return gcd(y%x,x);
}

long fib(long n){
    dp[0]=0;dp[1]=1;
    for(long i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];   
}
int solve(long a) {
    vector<int> fibs;
    int count=0;
    while(a>0){
        long temp=a%10;
        fibs.push_back(fib(temp));
        a=a/10;
        count++;
    }
    sort(fibs.begin(),fibs.end());
    long res=fibs[0];
    for(long i=0;i<count-1;i++){
        res=gcd(fibs[i],res);
        if(res==1){
            return 1;
        }
    }
    return res;
}
int main(){
    long a=36;
    int res=solve(a);
    cout<<res;
}