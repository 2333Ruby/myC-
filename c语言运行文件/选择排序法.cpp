#include<stdio.h>
int main()
{
	int i,j,t,k,N;
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
		k=i;
		
		for(j=i+1;j<=N-1;j++)
		{
			if(a[j]>a[k])
			{
				k=j;
			}
			if(k!=i)
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
		}
	}
	for(i=1;i<=N;i++)
	{
		printf("%3d",a[i]);	
	}
	return 0;	 
}
