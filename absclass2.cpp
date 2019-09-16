#include<iostream>
#include<stdio.h>
using namespace std;

class base
{
public:
base()
{
cout<<"constructing base \n";
}
virtual ~base()
{
cout<<"destructing base \n";
}
};
class derived:public base{
public:
derived()
{
cout<<"constructing der \n";
}
~derived()
{
cout<<"destructing der \n";
}
};
int main(void)
{
derived *d=new derived();
base *b=d;
delete b;
getchar();
return 0;
}
