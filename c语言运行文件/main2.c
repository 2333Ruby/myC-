#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int a,b;
	printf("«Î ‰»Î\n");
	scanf("%d",&a);
	if(a<0) b=-1;
	else if(a==0)b=1;
	else b=a+1;
	printf("%d",b);
	return 0;
}
