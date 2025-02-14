//fabonacci series
#include<iostream>
using namespace std;
int main(){
    int firstNo=0,secondNo=1,digits;
    cout<<"enter how many digit of series you want"<<endl;
    cin>>digits;

    if(digits==1){
        cout<<firstNo;
        return 0;
    } 

    else if(digits==2){
        cout<<firstNo<<""<<secondNo;
        return 0;
    }

    cout<<firstNo<<" "<<secondNo;

    for(int i=3;i<=digits;i++){   
       int currentNo=firstNo+secondNo;
       cout<<" "<<currentNo;
       firstNo=secondNo;
       secondNo=currentNo;
    }
    return 0;
}