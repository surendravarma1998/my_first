#include<iostream>
#include<string.h>
using namespace std;
class addstring
{
public:
char str[100];
addstring(){}
addstring(char str[])
{
strcpy(this->str,str);
}
addstring operator+(addstring& s2)
{
addstring s3;
strcat(this->str,s2.str);
strcpy(s3.str,this->str);
return s3;
}
};
int main()
{
char str1[]="surendra";
char str2[]="varma";
addstring a1(str1);
addstring a2(str2);
addstring a3;
a3=a1+a2;
cout<<"concateneated string is: "<<a3.str<<endl;
return 0;
}
/**#include<iostream>
using namespace std;
class str
{
private:
string s;
public:
str(string s_1="")
{
s=s_1;
}

str operator + (str const &obj)
{
str add;
add.s=s+" "+obj.s;

return add;
}
void print()
{
cout<<s;
}
};


int main()
{
str s1("Ranjith"),s2("Kumar");
str s3=s1+s2;
s3.print();


}**/
