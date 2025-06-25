#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    int first_index=0,last_index=5;
    while(first_index<last_index){
        swap(arr[first_index],arr[last_index]);
        first_index++;
        last_index--;
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

}