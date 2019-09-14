using namespace std;
#include<iostream>
static int x=1;
class A{

public: A()
{
cout<<x<<endl;
x++;
}
};

int main()
{
A obj1[200];
return 0;

}
