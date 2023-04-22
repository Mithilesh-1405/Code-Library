#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    if(nums[0] >= 2 || nums[nums.size() - 1] <= 0)
        return 1;

    int c = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 1)
            c = 1;
    }

    if(c == 0)
        return 1;

    for(int i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i + 1] - nums[i] > 1 && nums[i] > 0 && nums[i + 1] > 0)
        {
            return nums[i] + 1;
        }
    }

    return nums[nums.size() - 1] + 1;
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

    int x = firstMissingPositive(a);
    cout << x << endl;
}
