#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Please enter the total number of element in array"<<endl;
    cin>>n;
    cout<<"Please enter the element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //insertionsort increasing 
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else
            break;
        }
    }

    cout<<"Your sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}