//Generate all the subsequences of a given array

#include<bits/stdc++.h>
using namespace std;

void printS(int ind, vector<int> &arr, vector<int> &temp, int n){
    //Base Case
    if(ind==5){
        for(auto it:temp){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    printS(ind+1,arr,temp,n);
    temp.push_back(arr[ind]);
    printS(ind+1,arr,temp,n);
    temp.pop_back( );
}

int main(){
    vector<int> array={1,2,3,4,5};
    int n=5;
    vector<int> temp;
    printS(0,array,temp,n);
    return 0;
}