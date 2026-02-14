#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int n,target,arr[100];

    cout<<"Please enter the value of total number of element"<<endl;
    cin>>n;
    cout<<"Please enter the target value"<<endl;
    cin>>target;

    cout<<"Please enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Your array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Your sum values is "<<endl;
    
    //two sum  by the help of brute force approach which complexity is n2.
    bool stop=false;
    for(int i=0;i<n-1;i++){
        if (stop==true)
        break;
        for(int j=i+1;j<n;j++){
           if((arr[i]+arr[j])==target)
           {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            stop=true;
            break;

           }
        }
    }
    if(stop==false)
    {
        cout<<"Not present"<<endl;

    }

    //two sum by the of binary search which complexity of nlogn
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    for(int i=0;i<n-1;i++)
    {
        int x=target-arr[i];
        int 
    }

    return 0;
}