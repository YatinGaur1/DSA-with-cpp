#include<bits/stdc++.h>
using namespace std;
//a^b solution
int modularExponentiation(int a,int b,int n)
{
    int res=1;
    while (b>0)
    {
        /* code */
       if(b & 1){
       res=(1LL*res * a % n ) % n; //to typecast in long long we have used 1LL* expression and 1LL*res mean that res convert into long long
       }

       a=(1LL*a % n  * a % n  ) % n;
       b=b >> 1;
    }
    return res;
}

// int fastExponentiation(int a,int b)
// {
//     long res=1;
//     while(b>0)
//     {
//         if(b&1)
//         {
//             res=res*a;
//         }
//         a=a*a;
//         b=b>>1;//b=b/2
//     }
//     return res;
// }
int main(){
      long a,b;
      cin>>a>>b;
      //fast exponentiation and it time complexity is log2(b) becuase here division present for iteration
    //   cout<<"your anwer  without modular is "<<fastExponentiation(a,b)<<endl;

      //modular exponentiatin and it time complexity also log2(b)
      long n;
      cout<<"Please enter the modulo value "<<endl;
      cin>>n;
      cout<<"your answer with modular is "<<modularExponentiation(a,b,n)<<endl;
      return 0;
}