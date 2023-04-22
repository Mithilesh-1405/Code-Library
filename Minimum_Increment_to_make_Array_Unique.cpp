#include<bits/stdc++.h>
using namespace std;

int minIncrementForUnique(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    int count = 0;
    for(int i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i] >= nums[i + 1])
        {
            int y = nums[i + 1];
            nums[i + 1] = nums[i] + 1;
            count+=nums[i + 1] - y;
        }
    }

    return count;
}

int main()
{
    int N;
    cin >> N;
    vector<int>a;
    for(int i = 0; i < N; i++)
    {
        int f;
        cin >> f;
        a.push_back(f);
    }


    int d = minIncrementForUnique(a);
    cout << d << endl;
}
