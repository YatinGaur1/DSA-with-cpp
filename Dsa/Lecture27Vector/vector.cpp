#include<iostream>
#include<vector>
using namespace std;
int main (){
    //declare 
    vector<int>v;
    cout<<" v size"<< v.size();
    cout<<endl;
    cout<<" v capacity"<< v.capacity();
    cout<<endl;
    v.push_back(2);
    cout<<" v size"<< v.size();
    cout<<endl;
    cout<<" v capacity"<< v.capacity();
    v.push_back(3);
    cout<<endl;
    cout<<" v size"<< v.size();
    cout<<endl;
    cout<<" v capacity"<< v.capacity();
    v.push_back(5);
    cout<<endl;
    cout<<" v size"<< v.size();
    cout<<endl;
    cout<<" v capacity"<< v.capacity();
    //update value
    v[0]=1;
    cout<<endl;
    //print  the value
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
    return 0;
}