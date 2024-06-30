#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Hanoi(int n, char a, char b, char c)
{
	if (n >= 2) 
	{
		Hanoi(n - 1, a, c, b);
		printf("%c -> %c\n", a, c);
		Hanoi(n - 1, b, a, c);
	}
	else
	{
		printf("%c -> %c\n", a, c);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}
