#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void go(int *pa,int *pb) 
//{
//	int t=*pa;
//	*pa=*pb;
//	*pb=t;
//}
int main(int argc, char *argv[]) {
	int i,j,k,l;
	for(i=1;i<10;i++)
	{for(j=1;j<10;j++)
{       k=i*j;
		printf("%10d",k) ;
}       for(l=0;l<3;l++){
	printf("\n");
}

	}
	
	return 0;
}
