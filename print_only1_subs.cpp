//Print all subsequences with sum k
#include<bits/stdc++.h>
using namespace std;

bool printS(int ind, vector<int> &arr, vector<int> &temp, int sum, int n){
    //base case
    if(ind==n){
        if(sum==5){
            for(auto it:temp){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }

        return false;
    }

    //Take
    temp.push_back(arr[ind]);
    sum+=arr[ind];
    if(printS(ind+1,arr,temp,sum,n)==true){
        return true;
    }

    //Not take
    temp.pop_back();
    sum-=arr[ind];
    if(printS(ind+1,arr,temp,sum,n)==true){
        return true;
    }
    return false;
}


int main(){
    vector<int> array={1,2,1,4,2,5};
    int n=array.size(),sum=0;
    vector<int> temp;
    printS(0,array,temp,sum,n);
    return 0;
}