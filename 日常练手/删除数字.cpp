#include<stdio.h>
#include<ctype.h>
int main()
{
	int i,j;
	char e,d;
	char c[100];
    gets(c);
	for(i=0,j=0;c[i]!='\0';i++)
	{
	if(!isdigit(c[i]))
	{
		c[j]=c[i];
		j++;
	}
	}
	c[j]='\0';
	puts(c);
	return 0;
}
