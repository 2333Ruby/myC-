#include<stdio.h>
int main()
{
	int x,y,z,b;
	int a[199]={};
	b=0;
	scanf("%d",&x);
	
	for(y=0;y<200;y++,x++)
	{
		a[y]=x;
	}
	for(z=0;z<200;z++)
	{
		if(a[z]%6==0)
		{
			b++;
			printf("%d\n",a[z]);
		}
		
}
	printf("sum is:%d",b); 
	return 0;
	
}
