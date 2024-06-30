#include<stdio.h>

int main()
{
int N;
scanf("%d",&N);
 int i,j,k,a[N+1],*p;
 for (i=0,p=a;p<=a+N;i++,p++)
 *p=i;
 p=a+1;
 k=N;
 for (i=0,j=1;k!=1;j++) {
 if(p>(a+N))
 p=a+1;
 if(*p!=0)
 i++;
 if((i-3)==0) {
 *p=0;
 i=0;
 k--;
 }
 p++;
 }
 for (i=1;i<=N;i++)
 if(a[i]!=0)
 printf("%d",a[i]);
 return 0;
}
