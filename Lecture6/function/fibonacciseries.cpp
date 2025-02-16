#include<iostream>
using namespace std;

int fibonacci(int a);

int main(){
    int digit,finalAns;
    cout<<"Enter the value which u want digit "<<endl;
    cin>>digit;
    finalAns=fibonacci(digit);
    cout<<"final output of fibonacci digit is "<<finalAns;
    return 0;
}

int fibonacci(int digit){
    int firstNum=0,secondNum=1,finalAns=0;

    if(digit==1){
        return firstNum;
    }
   else if(digit==2)
    {
        return secondNum;
    }
    
    for(int i=3;i<=digit;i++){
           
        int nextDigit=firstNum+secondNum;

        finalAns=nextDigit;
        
    
        firstNum=secondNum;
        secondNum=nextDigit;
       
    }
 
    return finalAns;


}