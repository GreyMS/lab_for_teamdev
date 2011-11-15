#include "stdio.h"

void main()
{

	return;
}

int fact(int Num)
{
	if (Num == 1)
		return 1;
	else
		return Num * fact(Num - 1);
}

int Get1()
{
	return 1;
}