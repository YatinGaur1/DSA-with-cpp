#include<iostream>
using namespace std;
int main(){
    int num,digit=0,divider=10;
    cout<<"Enter the number which u want count digit"<<endl;
    cin>>num;
   
     //from while loop
    // while (num)
    // {
    //     digit++;
    //     num=num/10;
    // }
    //cout<<digit
    
    for(int i=1;i<=1;i--){
      if(num/divider==0)
      {
        cout<<"Number of digit is equal to "<<++digit;
        return 0;
      }
      else{
      digit++;
      divider=divider*10;
      }
    }
    cout<<"Number of digit is equal to "<<digit;
    return 0;
}