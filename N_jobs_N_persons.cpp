#include<bits/stdc++.h>
using namespace std;

int countbits(int mask){
    bitset<3> b1(mask);
    return b1.count();
}

void display(int dp[],int size){
    for(int i=0;i<size;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<vector<int>> cost{
        {3,2,7},
        {5,1,3},
        {2,7,2}
    };
    int n=3;
    int size=pow(2,n);
    int dp[size];
    dp[0]=0;
    for(int i=1;i<size;i++){
        dp[i]=INT_MAX;
    }
    display(dp,size);
    
    int x=pow(2,n);
    string comb[x];
    for(int i=0;i<x;i++){
        string binary = std::bitset<3>(i).to_string();
        comb[i]=binary;
    }
    for(int i=0;i<x;i++){
        int mask=stoi(comb[i]);
        cout<<"Mask:"<<mask<<endl;
        int onesbits=countbits(mask);
        cout<<"x:"<<onesbits<<endl;
        // cout<<onesbits<<endl;
        for(int j=0;j<n;j++){
            if(comb[i][n-1-j]!='1'){
                cout<<j<<endl;
                int ind=mask|1<<j;
                cout<<"prev: "<<dp[ind]<<" "<<"new: "<<dp[mask]+cost[onesbits][j]<<endl;
                cout<<"Index: "<<ind<<endl;
                dp[ind]=min((dp[mask|1<<j]),(dp[mask]+cost[onesbits][j]));
                cout<<"Updated: "<<dp[ind]<<endl;
            }
            display(dp,size);
            cout<<endl;

        }
    }
    display(dp,size);

    // cout<<dp[size];
}