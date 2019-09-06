#include<stdio.h>
	void input(int a[][10],int p,int q)
	{
	printf("\n enter terms :");
	int i,j;
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	scanf("%d",&a[i][j]);
	}
	int mul(int a[][10],int b[][10],int p,int q,int n,int m)
	{
        int i,j,k,sum=0;
        int c[10][10];
	for(k=0;k<p;k++)
{
        for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
{
	sum=sum+a[k][j]*b[j][i];
}
	c[k][i]=sum;
	sum=0;
}
}
	printf("\n mul matrix is:\n");
	for(i=0;i<p;i++)
{
	for(j=0;j<m;j++)
{
	printf("%3d",c[i][j]);
}
	printf("\n");
}
}

	int main()
	{
	int p,q,n,m;
	printf("\n enter the order of matrices: ");
	scanf("%d",&p);
	scanf("%d",&q);
	scanf("%d",&n);
	scanf("%d",&m);
	int a[10][10];
	int b[10][10];
	if(q==n)
	{
	input(a,p,q);
	input(b,n,m);
	mul(a,b,p,q,n,m);
	}
	else
	printf("\n not possible \n");
	return 0;
	}
