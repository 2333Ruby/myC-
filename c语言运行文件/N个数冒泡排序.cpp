#include<stdio.h>
int main()
{
	int i,j,t,N;
	printf("������Ҫ�Ƚϵ����ݸ���\n");
	scanf("%d",&N);
	int a[N];
	printf("������%d�����֣�\n",N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=1;i<=N-1;i++)
	{
		for(j=1;j<=N-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=1;i<=N;i++)
	{
		printf("%3d",a[i]);	
	}
	return 0;	 
}
