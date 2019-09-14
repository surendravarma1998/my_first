#include<iostream>

using namespace std;

class parent
{
public:
int id_p;
};
class child:public parent
{
public:
int id_c;
};
int main()
{
child obj1;
obj1.id_c=7;
obj1.id_p=10;
cout<<"child id is "<<obj1.id_c<<endl;
cout<<"parent id is "<<obj1.id_p<<endl;
return 0;
}
