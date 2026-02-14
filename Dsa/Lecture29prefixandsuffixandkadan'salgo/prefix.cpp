#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the number element in vector"<<endl;;
    cin>>n;
    vector<int>v(n);
    vector<int>prefix(n);
    cout<<"please enter the value in vectore"<<endl;
    for(int i=0;i<n;i++)
    cin>>v[i];
    prefix[0]=v[0];
    for(int i=1;i<n;i++)
    {
       prefix[i]=prefix[i-1]+v[i];
    }
    cout<<"Your prefix array is"<<endl;
    for(int i=0;i<n;i++)
    cout<<prefix[i]<<" ";
    cout<<endl;
    //suffix is reciprocal of it

    //let print the subarray of the vector
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++){
            cout<<"{ ";
            for(int k=i;k<=j;k++)
            {
              cout<<v[k]<<" ";
            }
            cout<<"}";
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}