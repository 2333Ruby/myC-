#include<stdio.h>
void swap(int *m,int *n);
int main()
{
	int a,b,c;
	int *p,*q,*t;
	scanf("%d,%d,%d",&a,&b,&c);
	p=&a,q=&b,t=&c;
	if(a>b)
	{
		swap(&a,&b);
		if(b>c)
		{
				swap(&b,&c);
				if(a>b)
				{
					swap(&a,&b);
				}
						
		}
	}
	if(a>c)
	{
		swap(&a,&c);
		if(b>c)
		{
				swap(&b,&c);
				if(a>b)
				{
					swap(&a,&b);
				}
						
		}
	}
	printf("%d,%d,%d",a,b,c);
	return 0; 
		
}
void swap(int *m,int *n)
{
	int x;
	x=*m;
	*m=*n;
	*n=x;
	
}
