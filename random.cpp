#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
unsigned seed;
cout<<"enter seed: \n";
cin>>seed;
srand(seed);
for(int i=1;i<=20;i++)
{
cout<<setw(10)<<(1+rand()%6);
if(i%5==0)
cout<<endl;
}
return 0;
}
