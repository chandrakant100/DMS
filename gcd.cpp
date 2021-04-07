#include<iostream>
using namespace std;

int gcd(int num1,int num2)
{
    if(num1==num2)
    {
        return num1;
    }
    else if(num1 < num2)
    {
        gcd(num1,num2-num1);
    }
    else
    {
        gcd(num1-num2,num2);
    }
}
int main()
{
    int num1, num2; 
    cout<<"Enter the two numbers:-";
    cin>>num1>>num2;
    int result = gcd(num1,num2);
    cout<<"The Gcd of the two numbers "<<num1<<" and "<<num2<<" is "<<result<<"\n";
    return 0;
}