#include<iostream>
using namespace std;

int main(){
    int n;
    int target;
    cout<<"Enter the total element of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the element in sorted form"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the target value"<<endl;
    cin>>target;

    //code part
    int left=0,right=n-1;
    int closest_diff=INT_MAX;
    int diff;
    pair<int,int>ans;
    while (left<right)
    {   int sum=a[left] +a[right];
        diff=abs(sum-target);

        if(diff<closest_diff){
            closest_diff=diff;
          ans={a[left],a[right]};
        }
        if(a[left]+a[right]>target){
            right--;
        }
        else
        {
            left++;
        }
         
    }
    cout<< ans.first <<" "<< ans.second;

}