#include<iostream>
using namespace std;
static int i;
class print
{
public:
print()
{
i++;
cout<<i<<endl;
}
~print()
{
int square;
square=i*i;
i--;
cout<<square<<endl;
}
};

int main()
{
print s[10];

return 0;
}
