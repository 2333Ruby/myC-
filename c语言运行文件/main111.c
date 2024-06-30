#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a;
//		srand((unsigned int)time(NULL)); 
		srand(1);
	for(i=0;i<10;i++)
	{
	printf("%d\n",rand()%51);
	} ;
	return 0;
}
