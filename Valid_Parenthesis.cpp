#include<bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for(auto i:s)
    {
        if(i=='(' || i=='{'|| i=='[' )
        {
            st.push(i);
        }
        else
        {
            if(st.empty() || (st.top()=='(' && i!=')') ||(st.top()=='{' && i!='}')||(st.top()=='[' && i!=']'))
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }

    }
    return st.empty();

}

int main()
{
    string d;
    cin >> d;
    bool s = isValid(d);
    cout << s << endl;
}
