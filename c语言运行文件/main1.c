#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	int max;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b){if((a>c)) printf("max=%d",a);
	else printf("max=%d",c);
	}
	else{if(b>c) printf("max=%d",b);
	else printf("max=%d",c);
	}
	return 0;
}
