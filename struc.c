struct student
{
char name[50];
int roll_no;
int age;
char phone[10];
} s[3];
int main()
{
int i;
printf("Enter information of students:\n");

for(i=0; i<3; ++i)
{
s[i].roll_no = i+1;
printf("Enter Roll no:");
scanf("%d",&s[i].roll_no);
printf("Enter name: ");
scanf("%s",s[i].name);
printf("Enter Age: ");
scanf("%d",&s[i].age);
printf("Enter Phone: ");
scanf("%s",s[i].phone);
printf("\n");
}
printf("Displaying Information:\n\n");
// displaying information
printf("Roll_no\t\tName\t\tAge\t\tPhoneNo\t\t \n");
for(i=0; i<3; ++i)
{
printf("%d\t\t%s\t\t%d\t\t%s\t\t\n",s[i].roll_no,s[i].name,s[i].age,s[i].phone);

}
return 0;
}
