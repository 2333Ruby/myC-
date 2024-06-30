#include<stdio.h>
int main()
{
	int x,y,z=0,c,e;
	
		for(y=2;y<=1000;y++)
		{   z=0;
			for(c=1;c<y;c++)
			{
				if(y%c==0)
				z+=c;
			}
			if(z==y)
			{
				printf("%d\n",y);
			}
}
return 0;	
}
