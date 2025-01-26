#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,c=1;
    int n;
    cout<<"Please enter the value of n which you multiple "<<endl;
    cin>>n;

    //code of this question 
    //time complexity is sqrt(n)

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
           a=i;
           break;
        }
    } 
    //here n is divisible by a then b*c=n/a->n; 
    n=n/a;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i!=a)
            {
                b=i;
            }
            if((n/i)!=i)
            {
                if((n/i)!=a)
                b=min(b,n/i);
            }
        }
    }

c=n/b;
if(a!=b && b!=c && a!=1 && b!=1 && c!=1){
cout<<"yes three interger posible"<<endl;
cout<<a<<" "<<b<<" "<<c;
}
else 
cout<<"three integer  not possible"<<endl;
return 0;
}

