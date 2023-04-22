#include<iostream>
using namespace std;

//Find the length of the longest common subsequence using DP

int subsLen(string s1, string s2, int len1, int len2){
    int LCS[len1+1][len2+1];
    for(int i=0;i<=len1;i++){
        LCS[i][0]=0;
    }
    for(int i=0;i<=len2;i++){
        LCS[0][i]=0;
    }
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            if(s1[i-1]==s2[j-1]){
               LCS[i][j] = LCS[i-1][j-1]+1;
            }
            else{
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }
    for(int i=0;i<=len1;i++){
        for(int j=0;j<=len2;j++){
            cout<<LCS[i][j]<<" ";
        }
        cout<<endl;
    }
    return LCS[len1][len2];
}

int main(){
    string s1,s2;
    cout<<"Enter string1:"<<endl;
    cin>>s1;
    cout<<"Enter String2:"<<endl;
    cin>>s2;
    int len1=s1.length(),len2=s2.length();
    int len=subsLen(s1,s2,len1,len2);
    cout<<"Length of the Longest Common Subsequence is: ";
    cout<<len;
}