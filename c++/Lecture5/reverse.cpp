#include<iostream>
using namespace std;
int main(){
    int num,remainder=0,reverse=0,compare;
    cout<<"Enter the number "<<endl;
    cin>>num;
    compare=num;
    while(num){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    if(compare==reverse)
    {
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome";
    }
    cout<<reverse;
    return 0;
}