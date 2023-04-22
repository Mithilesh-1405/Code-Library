#include<bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr)
{
    for(int i = 0; i < arr.size() - 1; i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(i != j && arr[i] == 2 * arr[j])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int N;
    cin >> N;
    vector<int>d;
    for(int i = 0; i < N; i++)
    {
        int s;
        cin >> s;
        d.push_back(s);
    }

    bool j = checkIfExist(d);
    cout << j << endl;
}
