#include<iostream>
using namespace std;
int main(){
    int binary,decimal=0,pw=1;
    cout<<"Enter binary number "<<endl;
    cin>>binary;
    while (binary)
    {
         decimal+=pw*(binary%10);
         pw*=2;
         binary=binary/10;
    }
    cout<<"your decimal number is "<<decimal;
    return 0;
}