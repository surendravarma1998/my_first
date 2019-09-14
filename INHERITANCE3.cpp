#include<iostream>
using namespace std;
class parent
{
protected:
int id_protected;
};
class child:public parent
{
public:
void set1d(int id)
{
id_protected=id;
}
};
void f()
{
    char *p;
    *p = 0;
}
int main()
{
f();
return 0;
}

