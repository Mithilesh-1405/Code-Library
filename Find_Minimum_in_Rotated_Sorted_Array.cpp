#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    return nums[0];
}

int main()
{
    int N;
    cin >> N;
    vector<int>a;
    for(int i = 0; i < N; i++)
    {
        int d;
        cin >> d;
        a.push_back(d);
    }

    int x = findMin(a);
    cout << x << endl;
}
