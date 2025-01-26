#include<iostream>
using namespace std; 
int N=1000000;
bool sieve[1000001];
void createsieve(){
  for(int i=2;i<=N;i++)
  sieve[i]=true;

  for(int i=2;i*i<=N;i++){
    if(sieve[i]==true)
    {
      for(int j=i*i;j<=N;j+=i)
      sieve[j]=false;
    }
  }
}
int main(){
    createsieve();//o(nlog(logn))  complexity of this function and  ->log(logn)is the harmonic progress 
    int t;
    cin>>t;
    while(t--)//this loop complexity is o(t)
    {
        int n;
        cin>>n;
       if(sieve[n]==true)
       cout<<"this is prime";
       else 
       cout<<"this is not prime";
     
    }
}