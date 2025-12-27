#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"please enter the total number of element of array"<<endl;
    cin>>n;
    cout<<"Please entering the element in an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your unsorted array is "<<endl;
     for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }

    cout<<endl;

    //bubble sort code
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"Your sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}