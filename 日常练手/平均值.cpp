#include<stdio.h>
int main()
{
	int b,c,d,i,x;
	float e,f;
	c=1;
	f=0;
	b=0;
	int a[1000]={};
	scanf("%d",&x);
	if(x<0||x>100)
	{
	printf("Invalid score!");
	}
	else if(x>=0&&x<=100)
	{
		{
			d=0;
			a[0]=x;
			while(d>=0&&d<=100){
				scanf("%d",&d);
				a[c]=d;
				c++;
			}
		}
		for(i=0;i<c-1;i++)
		{
			f+=a[i];
			
		}
		e=f/(c-1);
		printf("%6.2f",e);
}

	return 0;
	
}
