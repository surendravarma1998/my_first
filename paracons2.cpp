/**#include<iostream>
#include<cmath>
using namespace std;

class shape
{
public:
int length,breadth;
float radius;
shape(int x,int y,float r)
{
length=x;
breadth=y;
radius=r;
}
int rect(int length,int breadth)
{
return length*breadth;
}
int square(int length)
{
return length*length;
}
float circle(float radius)
{
return 3.14f*radius*radius;
}
};
int main()
{
shape s(1,2,3.5f);
int x,y;float r;
int i;
cout<<"select the shape "<<endl;
cout<<"---------------- "<<endl;
cout<<"1.square"<<endl<<"2.rectangle"<<endl<<"3.circle"<<endl;
switch(i)
{
case 1:
{
cout<<"enter side of square: "<<endl;
cin>>x;
s.square(x);
break;
}
case 2:
{
cout<<"enter length and breadth: "<<endl;
cin>>x>>y;
s.rect(x,y);
break;
}
case 3:
{
cout<<"enter radius: "<<endl;
cin>>r;
s.circle(r);
break;
}
default:
cout<<"enter correct option "<<endl;
}
return 0;
}**/
#include<iostream>
using namespace std;
class shape
{
int length,breadth,side,ch,area;
double radius,area_c;
public:
shape(int l,int b=1)
{
if(l!=b && b!=1)
{
length=l;breadth=b;
ch=1;
}
else
{
side=l;
ch=2;
}
}
shape(double r)
{
radius=r;
ch=3;
}
void call();
void rect();
void square();
void circle();
};

void shape::call()
{
if(ch==1)
rect();
if(ch==2)
square();
if(ch==3)
circle();
}


void shape::rect()
{
area=length*breadth;
cout<<"area of rectangle:"<<area<<endl;
}
void shape::square()
{
area=side*side;
cout<<"area of square:"<<area<<endl;
}
void shape::circle()
{
area_c=3.14*radius*radius;
cout<<"area of circle:"<<area_c<<endl;
}


int main()
{
shape s1(10,5),s2(10),s3(3.0);
s1.call();
s2.call();
s3.call();
return 0;
}
