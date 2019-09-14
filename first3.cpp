#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int num1,num2;
cout<<"enter two integers,and i will tell you\n"
    <<"the relationship they satisfy";
cin>>num1>>num2;
if(num1==num2)
cout<<num1<<" is equal to "<<num2<<endl;
if(num1!=num2)
cout<<num1<<" is not equal to "<<num2<<endl;
if(num1<num2)
cout<<num1<<" is less than "<<num2<<endl;
if(num1>num2)
cout<<num1<<" is greater than "<<num2<<endl;
}
