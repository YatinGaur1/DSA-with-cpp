//split  array with two subarray sum equal of both;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the number of element of vector"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"entering the value in vectore"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    //final approach
    int total_sum=0;
    for(int i=0;i<n;i++)
    {
      total_sum+=v[i];
    }
    int prefix=0;
    for(int i=0;i<n-1;i++)
    {
        prefix+=v[i];
        int ans=total_sum-prefix;
        if(prefix==total_sum){
            cout<<"yes u can ";
            break;
        }
         
    }
    cout<<"No u can't do that";

    return 0;
}