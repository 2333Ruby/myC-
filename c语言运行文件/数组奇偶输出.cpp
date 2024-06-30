#include<stdio.h>
int main()
{
	int a,c,i,j,m,n,q;
	int b[100],g[100];
	c=0;
	scanf("%d",&a);
	for(i=0;i<=a-1;i++)
{
	scanf("%d",&b[c]);
	c++;
}
for(j=0;j<=a;j++)
	{
	for(i=0,m=0;i<b[j];i++)
	{
		if(i%2==0)
		{
		g[m]=i;
		m++;	
		}	
		else
		printf("%-5d",i);
		
	}
	for(q=0,n=1;q<m;q++)
	{
		printf("%-5d",g[m+1-q]);		
	}
	printf("\n");
	printf("\n");
	}
return 0;
}
