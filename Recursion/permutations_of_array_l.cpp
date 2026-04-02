#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            permute(ds, nums, ans, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

int main()
{
    const int N=3;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[N] = {0};
    permute(ds, nums, ans, freq);
    for(auto &vec : ans){
        for(int x : vec){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
//tc=n*n!
//sc=0(n)+0(n)...ds and map