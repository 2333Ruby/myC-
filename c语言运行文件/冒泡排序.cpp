#include<stdio.h>
int main() 
{
 int b,c,d,e,f,g,h,i,j,k;
//scanf("%d%d%d%d%d",&b,&c,&d,&e,&f);
b=21;c=15;d=333;e=58;f=38;
int a[]={b,c,d,e,f};
k=sizeof(a)/sizeof(a[0]);
for(g=0;g<k-1;g++)
for(h=0;h<k-1-g;h++){

if(a[h]>a[h+1]){
	i=a[h];
	a[h]=a[h+1];
	a[h+1]=i;}
//	if(a[h]<=a[h+1]){
//		break;}
	}
for(j=0;j<5;j++){
	printf("%d\n",a[j]);
	
}return 0;
} 
