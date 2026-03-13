#include<iostream>
#include<map>
using namespace std;
int main(){
    //stores everything in key,value pair
    //the key can be of any datatype...int,double,pair etc
    //keys are UNIQUE and stored in Sorted order
    map<int,int> mpp;
    map<pair<int,int>,int>mpp1;
    
    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    mpp1[{2,3}]=10;
    /*{mpp:
        {1,2}
        {2,4}
        {3,1}
    }*/
   for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;
   }

   cout<<mpp[1];//2
   cout<<mpp[5];//0

   auto it=mpp.find(3);
   cout<<(*it).second;//points to 1 in (3,1)

   auto it=mpp.find(5);//right after mpp.end()

   //rest all same functions..upper bound,lower bound,swap,erase etc
   
}