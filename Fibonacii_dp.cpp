#include<bits/stdc++.h>
using namespace std;

int f(int n,vector<int> &dp){
    if(n<=1){
        return 1; // base case
    }
    if(dp[n]!=-1){
        return dp[n]; // If already stored the value, return;
    }
    return dp[n]=f(n-1,dp)+f(n-2,dp); //else compute and return
   
}
int main(){
    int n=10;
    vector<int> dp(n+1,-1);
    int res=f(n,dp);
    cout<<res<<endl;
}