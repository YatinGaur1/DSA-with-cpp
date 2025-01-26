#include<bits/stdc++.h>
#include<iostream>

using namespace std;
//HCF =highest common factor or gcd =greater common divisor
int main()
{
    int n1,n2;
    cout<<"Please enter the value of two inputs "<<endl;
    cin>>n1>>n2;

    //Brute force approach time complexity is worst case -o(min(n1,n2))

    int gcd=1;//1 is must be gcd if two number has no same highest factor;

    for(int i=1;i<=min(n1,n2);i++)//start from starting 
    {
        if(n1%i==0 && n2%i==0)
         gcd=i;
    }
    cout<<"your gcd is "<<gcd<<endl;
    //second approach
    //timecomplexity of this also min(n1,n2)

    for(int i=min(n1,n2);i>=1;i++)//start from last that's why use break because first number from end which is divisible both must highest divisor always;
    {
       if(n1%i==0 && n2%i==0)
       {
        gcd=i;
        break;
       }
    }
   cout<<"your gcd is "<<gcd<<endl;
    //third approach using euclidean algorithm-but this is iteration method which is time complexity is o(logfia(min(a,b)));
    
    while(n1>0&&n2>0){
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0)cout<<"your gcd is "<<n2;
    else cout<<"your gcd is "<<n1;    
    
}
