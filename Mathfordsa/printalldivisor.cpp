#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void printDivisor(int n)
{
    vector<int> ls;
    //complexity of o(sqrt(n));
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if(n/i!=i)
            ls.push_back(n/i);
        }
    }
// complexity is nlogn where n is the factors only not input n;
   sort(ls.begin(),ls.end());

    cout<<"your all divisors are "<<endl;
    //complexity it o(n) where n only factor not n;
    for(auto it:ls)
    cout<< it<<" ";
  //total complexity of this is o(sqrt(n))+o(n)+o(n)=o(sqrt(n))ans;
   
}

int main()
{
    int N;
    cout<<"Please enter the input "<<endl;
    cin>>N;
    printDivisor(N);
    return 0;
}