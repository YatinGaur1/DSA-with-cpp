//you have to find index where element present or maybe present
#include<iostream> 
using namespace std;
int searchIndex(int a[],int n,int target){
   int  start=0,end=n-1,index=-1;
   while(start<=end){
    int mid=start+(end-start)/2;
    if(a[mid]==target)
    return mid;
    else if(a[mid]<target){
        index=mid+1;
        start=mid+1;
    }
    else{
         index=mid;
         end=mid-1;
    }

    }
    return index;
   }

int main(){
int arr[100];
int n,target;
cout<<"Please enter the total number of array"<<endl;
cin>>n;
cout<<"Please entering the number of element in array"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"your array is" <<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Please enter the target value"<<endl;
cin>>target;
int index=searchIndex(arr,n,target);
cout<<"your element present or maybe present on index"<<index<<endl;
return 0;
}
