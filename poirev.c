#include <stdio.h> 
#include <string.h> 

void printReverse(char str[]) 
{ 
int length = strlen(str); 
int i; 
for (i = length - 1; i >= 0; i--) { 
if (str[i] == ' ') { 

str[i] = '\0'; 

printf("%s ", &(str[i]) + 1); 
} 
} 

printf("%s", str);
printf("\n"); 
} 

int main() 
{ 
char str[20]; 
printf("Enter a string\n");
gets(str);
printf("After reversing the string:");
printReverse(str); 
return 0; 
}


