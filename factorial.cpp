#include "stdio.h"

void main()
{

	return;
}

int fact(int Num)
{
	int res = 1;
	for (int i = Num; i > 0; i--)
		res *= i;

	return res;
}