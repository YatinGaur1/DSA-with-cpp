#include<iostream>
using namespace std; 
int main(){
    int N;
    cout<<"Please enter the number of which factor sum you want"<<endl;
    cin>>N;

    // code for sumof factor
    //time complexity sqrt(n);

    int sum=0;
    for(int i=1;i*i<=N;i++)
    {
        if(N%i==0)
        {
            sum+=i;
            if((N/i)!=i)
            {
                sum+=N/i;
            }
        }
    }

   cout<<"your factor sum is equal to "<<sum<<endl;

}