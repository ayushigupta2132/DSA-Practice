#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void func(int ind,int sum,vector<int> &arr,int N,vector<int> &sumSubset){
    if(ind==N){
        sumSubset.push_back(sum);
        return;
    }

    //pick the element
    func(ind+1,sum+arr[ind],arr,N,sumSubset);
    //do not pick the element
    func(ind+1,sum,arr,N,sumSubset);
}

int main(){
    int N=3;
    vector<int> arr={3,2,1};
    vector<int> sumSubset;
    arr={3,2,1};
    func(0,0,arr,N,sumSubset);
    sort(sumSubset.begin(),sumSubset.end());
    cout << "Subset sums:\n";
    for (int x : sumSubset) {
        cout << x << " ";
    }
    return 0;
}