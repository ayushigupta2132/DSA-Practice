//check that how many bits need to be flipped in order to reach goal
#include<iostream>
using namespace std;

int main(){
    int start,goal;
    cin >> start >> goal;
    int ans = start ^ goal;//ye utne bits flip krdega jitni need hai(set krdega)
    int count = 0;
    for(int i=0;i<=31;i++){
        if(ans & (1<<i)) count++;//count the set bits
    }
    cout << count;
    return 0;
}
//tc=log(start^goal)..base2
//sc=0(1)

// example:
// start = 10  -> 1010
// goal  = 7   -> 0111
// XOR   = 13  -> 1101
// number of set bits in 1101 = 3 (answer)
