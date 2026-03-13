#include<iostream>
#include<set>
using namespace std;
int main(){
    //it is SORTED and MULTIPLE
    multiset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);//all 1's erased
    int count=ms.count(1);

    ms.erase(ms.find(1));
    //only a single 1 is erased
    //ms.erase(ms.find(1),ms.find(1)+2);

}