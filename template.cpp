#include<iostream>
using namespace std;
template<typename T>
T mymax(T x,T y)
{
return (x>y)?x:y;
}
int main()
{
cout<<mymax<int>(3,7)<<endl;
cout<<mymax<double>(3.0,7.0)<<endl;

cout<<mymax<char>('g','o')<<endl;

}
