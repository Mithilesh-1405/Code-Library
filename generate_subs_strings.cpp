#include<bits/stdc++.h>
using namespace std;

void printS(int ind, string str, string temp, int n){
        if(ind==n){
            cout<<temp<<endl;
            return;
        }
        temp+=str[ind];
        printS(ind+1,str,temp,n);
        temp.pop_back();
        printS(ind+1,str,temp,n);
}


int main(){
    string str="ggg";
    int n=str.length();
    string temp="";
    printS(0,str,temp,n);
    return 0;
}