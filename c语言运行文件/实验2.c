#include<stdio.h>
int main()
{
	FILE*fp=fopen("12.in","r");
	if(fp){
		int num;
		fscanf(fp,"%d",&num);
		prrintf("%d\n",num);
		fclose(fp);
	}else{
	printf("无法打开文件\n");
	}
	return 0;
}
