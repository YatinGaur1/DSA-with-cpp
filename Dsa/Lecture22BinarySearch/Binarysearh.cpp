#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int target){
       int start=0,end=n-1,key=target;
       while(start<=end){
       int  mid= start+ (end-start)/2;
          if(a[mid]==target)
          return mid;
          else if(a[mid]<key)
           start=mid+1;
         else
         end=mid-1;
       }
       return -1;
}
int main(){
    int arr[100];
    int n,key;
    cout<<"Please enter the total number of array"<<endl;
    cin>>n;
    cout<<"Please entering the number of element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Entering the target value which you want to search"<<endl;
    cin>>key;
    int index=binarySearch(arr,n,key);
    cout<<"your index of element is"<<endl;
    cout<<index;
    return 0;
}