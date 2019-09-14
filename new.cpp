#include<iostream>

using namespace std;

int maximum(int,int,int);
int main()
{
 int a,b,c;

 cout<<"enter the numbers\n";
 cin>>a>>b>>c;
 cout<<" maximum is:"<<maximum(a,b,c);
 return 0;
}
/**int maximum(int a,int b,int c)
{
int max;
if(b>a)
{
if(c>b)
max=c;
else
max=b;
}
else
{
if(c>a)
max=c;
else
max=a;
}
return max;
}**/
int maximum(int a,int b,int c){
return (a > b ? (a > c ? a : c) : (b > c ? b : c));}

/*int maximum(int x,int y,int z)
{
int max=x;
(max>y&&max>z)?max=x:(y>z)?max=y:max=z;
return max;
}*/

