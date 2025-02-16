#include<iostream>
using namespace std;
int main(){
    int decimal,pw=1,binary=0;
    cout<<"Enter the decimal number "<<endl;
    cin>>decimal;
    while(decimal){
        binary+=pw*(decimal%2);
        pw*=10;
        decimal=decimal/2;
    }
    cout<<"your binary number is"<<binary;
    
    return 0;
}