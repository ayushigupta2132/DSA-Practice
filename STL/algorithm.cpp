#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //if these conditons dont satisfy..then they are same
    if(p1.first>p2.first) return true;
    return false;
}
int main(){
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    sort(a,a+3);//ascending
    sort(a+1,a+3);//sorts a portion
    sort(a,a+3,greater<int>);

    //sort it according to the second element
    //if second element is same,then sort
    //it according to the first element in descending order
    sort(a,a+3,comp);

    int num=7;
    int cnt=__builtin_popcount();//3
    //it returns the number of 1's or set bits of a given num(binary)

    long long num=5362173536256;
    int cnt2=__builtin_popll();

    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    //it gives all permutations dictionary wise
    //when all permutations are over..it returns false and loop is ended
    //if 213 is given initially..then only 3 permutations are printed
    //so it is important to start from the sorted order

    int maxi=*max_element(a,a+3);
    //similarly min is also there
}