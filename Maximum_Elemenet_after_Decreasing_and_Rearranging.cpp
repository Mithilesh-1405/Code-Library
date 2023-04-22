#include<bits/stdc++.h>
using namespace std;

int maximumElementAfterDecrementingAndRearranging(vector<int>& arr)
{
    sort(arr.begin(),arr.end());
    if(arr[0] != 1)
        arr[0] = 1;
    for(int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i + 1] - arr[i] > 1)
        {
            arr[i + 1] = arr[i] + 1;
        }
    }

    return arr[arr.size() - 1];
}


int main()
{
    int N;
    cin >> N;
    vector<int>a;
    for(int i = 0;i < N;i++)
    {
        int d;
        cin >> d;
        a.push_back(d);
    }

    int x = maximumElementAfterDecrementingAndRearranging(a);
    cout << x << endl;
}
