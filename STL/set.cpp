#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}...doesn't inserts
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}
    //UNIQUE and SORTED
    //not linearly stored..inside this a tree is maintained
    
    auto it=st.find(3);
    //it returns an iterator which points to 3(address)
    auto it=st.find(6);
    //if an element is not present in the set,then it returns right after st.end()
    st.erase(5);
    //erase 5 //takes logarithmic time
    int count=st.count(1);
    //counts the number of occurances
    auto it=st.find(3);
    st.erase(it);
    //it takes constant time

    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);
    //after erase={1,4,5}....[first,last)

    //all other functions are same as vector
    //lower_bound() and upper_bound() function work in the same way as in vector

    //auto it=it.lower_bound(2);
    //auto it=it.upper_bound(3);
   
}
//in set..everything happens in log(N)
