#include<stdio.h>
int main()
{
	int z,y,c;
	int n;
	z=0,c=0;
	int a[30]={};
	scanf("%d",&n);
	while(n>0)
	{
		 
		a[z]=n%10;
		c+=(n%10)*(n%10);
		n/=10;
	
	}
	
	printf("%d",c);
	return 0;
}


//	z++;
//for(y=0;y<z;y++)
//	{
//		c+=a[y]*a[y];	
//	}
