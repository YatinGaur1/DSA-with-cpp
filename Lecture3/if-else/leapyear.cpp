#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year";
    cin>>year;
    if((year%400==0)||(year%4==0&&year%100!=0))
    cout<<"this is year is  leapyear";
    else
    cout<<"not a leapyear";

}