#include<iostream>
using namespace std;
int x=1;
void a(void)
{
int x=25;
cout<<endl<<"local x in a is "<<x<<" after entering a"<<endl;
++x;

cout<<endl<<"local x in a is "<<x<<" before exiting a"<<endl;
}
void b(void)
{
static int x=50;
cout<<endl<<"local x in b is "<<x<<" after entering b"<<endl;
++x;

cout<<endl<<"local x in b is "<<x<<" before exiting b"<<endl;
}
void c(void)
{
cout<<endl<<"global x is "<<x<<" on entering c"<<endl;
x*=10;
cout<<"global x is "<<x<<" on exit c"<<endl;
}
int main()
{
int x=5;
cout<<"local x in outer scope of main is "<<x<<endl;
{
int x=7;
cout<<"local x in inner scope of main is "<<x<<endl;
}
cout<<"local x in outer scope of main is "<<x<<endl;
a();
b();
c();
a();
b();
c();
return 0;
}
