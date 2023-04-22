//Print all subsequences with sum k
#include<bits/stdc++.h>
using namespace std;

int printS(int ind, vector<int> &arr,int sum, int n,int count){
    //base case
    if(ind==n){
        if(sum==5){
            return 1;
        }
        return 0;
    }

    //Take
    sum+=arr[ind];
    int l=printS(ind+1,arr,sum,n,count);
    
    //Not take
    sum-=arr[ind];
    int r=printS(ind+1,arr,sum,n,count);

    return l+r;
}


int main(){
    vector<int> array={5,5,5,5,5};
    int n=array.size(),sum=0;
    int res=printS(0,array,sum,n,0);
    cout<<res;
    return 0;
}