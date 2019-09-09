#include<stdio.h>
#include<string.h>
int main()
{
char str1[10]="Nisha",str2[10]="Mathew",str3[10]="Neha";

strcpy(str1,str2);
printf("%s\n",str1);
strncpy(str3,str2,2);
printf("%s\n",str3);
printf("%s\n",strstr(str2,"ath"));

}
