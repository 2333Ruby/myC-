#include<stdio.h>
int main()
{
	int i,j,t,N;
	printf("请输入要比较的数据个数\n");
	scanf("%d",&N);
	int a[N];	
	printf("请输入%d个数字：\n",N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=1;i<=N-1;i++)
	{
		for(j=i+1;j<=N;j++)
		{
			if(a[i]<a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=1;i<=N;i++)
	{
		printf("%3d",a[i]);	
	}
	return 0;	 
}
