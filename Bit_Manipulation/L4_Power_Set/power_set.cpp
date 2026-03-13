//print all the subsets of a given power set

#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {

    int n = nums.size();
    int subsets = 1 << n;
    vector<vector<int>> ans;

    for(int num = 0; num <= subsets - 1; num++) {
        vector<int> list;

        for(int i = 0; i <= n - 1; i++) {
            if(num & (1 << i)) {
                list.push_back(nums[i]);
            }
        }

        ans.push_back(list);
    }

    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<vector<int>> ans = subsets(nums);
    for(auto &v : ans){
        cout << "{";
        for(int x : v){
            cout << x << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}

//tc=0(n*2^n)
//sc=0(2^n*n)

