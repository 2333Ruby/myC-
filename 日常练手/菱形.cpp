#include<stdio.h>
int main()
{
	int N,a,b,c,d,e,f,g,h,i,j,k,l,m,n;
//	f=1,h=1,j=1,k=1,m=2;
	scanf("%d",&N); 
	scanf("%d",&a);//,&b);
	for(c=0;c<N;c++)
	{	e=0,g=0,d=1,i=0;
		f=1,h=1,j=1,k=1,m=2;
//		scanf("%d",&a);//,&b);
		for(e=0;e<a-f;e++)
		{
			printf(" ");
		}
		printf("X\n");
		for(g=0;g<a-h;h++)
		{
		for(d=1;d<a-f;d++)
		{
			printf(" ");
		}
		f++;
		printf("X");
		for(i=0;i<j;i++)
		{
			printf(" ");
		}
		j+=2;
		printf("X\n");
		}
		//         //         //          //
		j-=3;
		for(l=a-1;l>1;l--)
		{	
			
			for(k=1;k<m;k++)
		{
			printf(" ");
		}
		m++;
		printf("X");
		for(d=j;d>1;d--)
		{
			printf(" ");
		}
		j-=2;
		printf("X\n");
		}
//			//       //       //
		}
		e=0;
		for(e=0;e<a-1;e++)
		{
			printf(" ");
		}
		printf("X\n");
		
	return 0;
 }
 
