#include<bits/stdc++.h>
using namespace std;

void swap(char *a,char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

string reverseVowels(string s)
{
    string a = "aeiouAEIOU";
    int i = 0,j = s.size() - 1;
    while(i < j)
    {
        int flag = 0,flag1 = 0;
        for(int k = 0; k < a.size(); k++)
        {
            if(s[i] == a[k])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            i++;
        }

        for(int k = 0; k < a.size(); k++)
        {
            if(s[j] == a[k])
            {
                flag1 = 1;
                break;
            }
        }

        if(flag1 == 0)
        {
            j--;
        }

        if(flag == 1 && flag1 == 1)
        {
            swap(&s[i],&s[j]);
            i++;
            j--;
        }
    }

    return s;
}

int main()
{
    string a;
    cin >> a;
    string d = reverseVowels(a);
    cout << d << endl;
}
