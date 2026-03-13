//Container
//you cannot modify the size of the array
//vector is a container which is dynamic in nature..you can increase the size when need
//use vector when size is not specifies
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    v.push_back(1);//creates an empty container and takes 1 into it
    v.emplace_back(2);//dynamically increases its size and adds 2 at last
    //generally emplace back is faster than push back

    vector<pair<int,int>>vec;

    vec.push_back({1,2});//you have to give curly braces
    vec.emplace_back(3,4);//it assumes to be a pair 

    vector<int>p(5,100);
    //a vector with 5 instances of 100 is initialized
    vector<int>q(5);
    //a vector with 5 instances of 0/garbage value is initialized
    
    vector<int>p2(p);//copies vector p
/*********************************************************************************************************************/
 
//Iterators

    vector<int> m = {10, 20, 30, 40};
    vector<int>::iterator it=m.begin();
    //iterator points to the memory address (contiguous)
    it++;
    //m.begin() gives the memory address and *m.begin() gives the element
    cout<<*(it)<<" "<<endl;

    it=it+2;
    cout<<*(it)<<" "<<endl;

    vector<int>::iterator it1 =m.end();
    //end will point to the memory address after the last element so do an it--
    vector<int>::reverse_iterator it2 =m.rend();
    //reverse end reverses the vector and points after 10
    vector<int>::reverse_iterator it3 =m.rbegin();
    //reverse and points to 40..not before 40

    cout<<m[0]<<" "<<m.at(0)<<endl;//you can access elements of vector as same as arrays..or using at()
    cout<<m.back()<<endl;//last element
/***********************************************************************************************************/
    for(vector<int>::iterator it=m.begin();it!=m.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //auto automatically assigns the datatype to vector iterator
    for(auto it=m.begin();it!=m.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it:m){
        cout<<it<<" ";
        //here auto is int..not an iterator
    }
/***********************************************************************************************************/
    vector<int>a={10,20,30,40,50,60};
    a.erase(a.begin()+1);//erares 20
    a.erase(a.begin()+2,a.begin()+3);//start is included but end is not
/********************************************************/
     
    vector<int>n(2,100);
    n.insert(n.begin(),300);//{300,100,100}
    n.insert(n.begin()+1,2,10);//{300,10,10,100,100}

    vector<int> copy(2,50);//{50,50}
    n.insert(n.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

    cout<<n.size();//gives the size of vector
    n.pop_back();//erases last element

    n.swap(m);//swaps elements of m and n

    n.clear();//erases the entire vector

    cout<<n.empty();//checks
    return 0;
}