#include<stdio.h>
int main()
{
	int x,y,z,n,q;
	scanf("%d",&x);
	int m[100]={};
	y=x,z=0,q=10;
	for(;y<x+1000;y++)
	{
		if(y%3==0&&y%5==0)
		{
			m[z]=y;
			z++;	
		}
	}
	for(n=10;n<20;n++)
	{
		printf("%-5d",m[z-q]);
		q--;
	}
	return 0;	
} 
