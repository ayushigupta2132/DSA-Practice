#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permute(int index,vector<int> &nums,vector<vector<int>> &ans)
{
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        permute(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    permute(0,nums,ans);
    for(auto &vec : ans){
        for(int x : vec){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
//tc=n*n!
//sc=0(n!)+0(n)...ans and recursion stack