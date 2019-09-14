#include<iostream>

using namespace std;

int minimum(int,int,int);
int main()
{
 int a,b,c;

 cout<<"enter the numbers\n";
 cin>>a>>b>>c;
 cout<<" minimum is:"<<minimum(a,b,c);
 return 0;
}
int minimum(int a,int b,int c)
{
return(a<b?(c<a?c:a):(c<b?c:b));
}
