#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the total number of element in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please enter the number of element in array"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array element is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Selection sort code
    for(int i=0;i<n-1;i++)
    {
       int index=i;
       for(int j=i+1;j<n;j++){
          if(arr[j]<arr[index])
          {
            index=j;
          }
       }
       //swaping without third variable
       swap(arr[index],arr[i]);
    }
    cout<<"Your sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}