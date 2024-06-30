#include <stdio.h>
#include <stdlib.h>
#define max(a,b) ((a)>(b)?(a):(b))
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d%d\n",min(a,b));
	return 0;
}
