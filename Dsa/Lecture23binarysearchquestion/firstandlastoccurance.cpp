#include<iostream> 
using namespace std;
int OccuranceSearch(int a[],int n,int target){

    int start=0,end=n-1,first=-1,last=-1;
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
cout<<arr[i]<<" " ;
}
cout<<endl;
cout<<"Enter the target value"<<endl;
cin>>target;
int index=OccuranceSearch(arr,n,target);
return 0;
}
//doing after learnt vector;