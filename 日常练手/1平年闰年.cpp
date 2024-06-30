#include<stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	if(y%4==0&&y%100!=0||y%400==0)
	{
		printf("%d 是润年",y); 
	}
	else
		printf("%d 是平年",y); 
	return 0;
}
