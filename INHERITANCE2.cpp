#include<iostream>
using namespace std;
class vehicle{
public:
vehicle()
{
cout<<"this is vehicle"<<endl;
}
};
class fourwheeler{
public:
fourwheeler()
{
cout<<"this is fourwheel vehicle"<<endl;
}
};
class car:public fourwheeler
{
public:
car()
{
cout<<"car has 4 wheels"<<endl;
}
};
int main()
{
car obj;
return 0;
}
