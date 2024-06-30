#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,z,n;
	scanf("%lf %lf",&x,&y);
     x>=0;
	z=x;
	n=(y+x/y)/2;
	printf("%-10.5f\n",n);
	while(fabs(z-n)>=0.00001)
	{	
		z=n;
		n=(n+x/n)/2;
		printf("%-10.5f\n",n);	
	}

	return 0;
 } 

 
