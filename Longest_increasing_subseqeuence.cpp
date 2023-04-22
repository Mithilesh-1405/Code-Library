#include<bits/stdc++.h>
using namespace std;

int findLIS(vector<int> &arr, int n){
    vector<int> dp(n,1);
    // memset(dp,1,sizeof(dp));
    int LIS=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && dp[j]+1 > dp[i]){
                dp[i]=dp[j]+1;
                LIS=max(dp[i],LIS);
            }
        }
    }
    return LIS;
}


int main(){
    int n;
    // cin>>n;
    vector<int> arr={5,11,3,20,30,25,26,50,12,8,63};
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    cout<<findLIS(arr,arr.size());
}