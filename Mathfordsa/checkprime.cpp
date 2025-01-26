#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Please enter the number check whether it is prime or not "<<endl;
    cin>>n;

    int count=0;
    //time complexity of this is o(sqrt(n));
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
         count++;
         if(n/i!=i)
         {
            count++;
         }
        }
    }

    if(count==2)
    cout<<"it is prime "<<endl;
    else cout<<"it is not prime "<<endl;

    return 0;
}
