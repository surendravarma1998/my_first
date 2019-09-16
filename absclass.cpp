/*#include<iostream>
using namespace std;
class Base
{
	int x;
	public:
	virtual void fun()=0;
	int getx(){return x;}
};
class Derived:public Base
{
	int y;
	public:
	void fun()
	{
	cout<<"fun() called";
	}
};
int main(void)
{
	Derived d;
	d.fun();
	return 0;
}*/
/*
#include<iostream>
using namespace std;
class Base
{
	
	public:
	virtual void show()=0;
	
};
class Derived:public Base
{
	
	public:
	void show()
	{
	cout<<"derived\n";
	}
};
int main(void)
{
	Base *bp=new Derived();
	bp->show();
	return 0;
}*/
#include<iostream>
using namespace std;
class Base
{
	protected:
	int x;
	public:
	virtual void fun()=0;
	Base(int i){x=i;}
	
};
class Derived:public Base
{
int y;
public:
Derived(int i,int j):Base(i){y=j;}
void fun(){
cout<<"x = "<<x<<",y = "<<y;
}
};

int main(void)
{`
	Derived d(4,5);
d.fun();	
return 0;
}
