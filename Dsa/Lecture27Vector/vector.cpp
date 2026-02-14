#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main (){
    //declare 
//   vector<int>v;

//     cout<<" v size"<< v.size();
//     cout<<endl;
//     cout<<" v capacity"<< v.capacity();
//     cout<<endl;
//     v.push_back(2);
//     cout<<" v size"<< v.size();
//     cout<<endl;
//     cout<<" v capacity"<< v.capacity();
//     v.push_back(3);
//     cout<<endl;
//     cout<<" v size"<< v.size();
//     cout<<endl;
//     cout<<" v capacity"<< v.capacity();
//     v.push_back(5);
//     cout<<endl;
//     cout<<" v size"<< v.size();
//     cout<<endl;
//     cout<<" v capacity"<< v.capacity();
//     //update value
//     v[0]=1;
//     cout<<endl;
//     //print  the value
//    for(int i=0;i<v.size();i++)
//    cout<<v[i]<<" ";


// vector<int>v(5,1);
// vector<int>v={1,2,3,4,5}
// for(int i=0;i<v.size();i++){
//     cout<<v[i];
// }

 //vector<int>vnew;
// vnew.push_back(2);
// vnew.push_back(3);
// vnew.push_back(45);
// vnew.push_back(56);
// vnew.push_back(57);
// cout<<"size "<<vnew.size()<<endl;
// cout<<"capactiy"<<vnew.capacity()<<endl;
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }
// vnew.pop_back();
// cout<<endl;
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }
// vnew.erase(vnew.begin()+1);
// cout<<endl;
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }
// vnew.insert(vnew.begin()+1,50);
// cout<<endl;
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }
// vnew.clear();//remove all element
// cout<<endl;
// cout<<"size "<<vnew.size()<<endl;
// cout<<"capactiy"<<vnew.capacity()<<endl;

vector<int>arr;
arr.push_back(2);
arr.push_back(7);
arr.push_back(8);
arr.push_back(9);

// cout<<arr.front()<<endl;
// cout<<arr.back()<<endl;
// cout<<arr[0]<<endl;
// cout<<arr[arr.size()-1]<<endl;

// //copy one vector to another 
// vector<int>a;
// a=arr;
// cout<<"size"<<a.size()<<endl;
// cout<<"capacity"<<a.capacity()<<endl;

// for(auto it=a.begin();it!=a.end();it++)
// cout<<*it<<" ";
// cout<<endl;
// for(auto i:a)//for printing also
// cout<<i<<" ";

//sorting in vector
sort(arr.begin(),arr.end());//increasing order
for(auto i:arr)
cout<<i<<" ";

cout<<endl;
sort(arr.begin(),arr.end(),greater<int>());//decreasing order 
for(auto i:arr)
cout<<i<<" ";

cout<<endl;
sort(arr.rbegin(),arr.rend());//decreasing order 
for(auto i:arr)
cout<<i<<" ";

cout<<endl;
//searching in vector
int ans=binary_search(arr.begin(),arr.end(),8);
cout<<ans;

int index=find(arr.begin(),arr.end(),8)-arr.begin();//pointing to the value for getting index u have to -arr.being() 
cout<<endl;
cout<<index<<endl;
//get min or max
//int m= max_element(arr.begin(),arr.end());

//int count=count(arr.begin(),arr.end(),5);

//lower bound and upper bound
// auto it=lower_bound(arr.begin(),arr.end(),2);
// cout<<it<<endl;
// auto it=upper_bound(arr.begin(),arr.end(),2);
// cout<<it<<endl;

return 0;
}