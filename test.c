#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;


}

int main()
{
	int num1 = 100;
	int num2 = 2000;
	int max = 0;
	max = Max(num1, num2);
	printf("max =%d\n", max);
	return 0;
}