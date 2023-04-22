#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string temp = "";
    int h = 0;
    if(word1.size() < word2.size())
    {
        h = word1.size();
    }

    else
    {
        h = word2.size();
    }

    for(int i = 0; i < h; i++)
    {
        temp += word1[i];
        temp += word2[i];
    }

    if(word1.size() == word2.size())
        return temp;
    else if(word1.size() < word2.size())
    {
        for(int i = word1.size(); i < word2.size(); i++)
        {
            temp += word2[i];
        }
    }

    else
    {
        for(int i = word2.size(); i < word1.size(); i++)
        {
            temp += word1[i];
        }
    }

    return temp;
}

int main()
{
    string a,b;
    cin >> a >> b;
    string d = mergeAlternately(a,b);
    cout << d << endl;
}
