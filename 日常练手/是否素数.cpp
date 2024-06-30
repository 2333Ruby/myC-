#include<stdio.h>
int main()
{
	int m,n,b,a;
	a=0;
	scanf("%d",&m);
	b=m;
	for(;b<m+200;b++)
	{
	if(b==0||b==1){
		printf("%-8d",b);
		return 0;
	}
	for(n=2;n<=b-1;n++)
	{
		if(b%n==0)
		{
			break;	
		}
	}
	if(n==b)
	{
		a++;
		printf("%-8d",b);
	if(a%5==0)
	printf("\n");
	}	
	}
	return 0;
}
