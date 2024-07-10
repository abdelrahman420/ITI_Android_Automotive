#include "../include/app.h"

int Calc(int x,int y,char oper)
{
	int z = 0;
	switch(oper)
	{
		case '+':z = x+y;
			 break;
		case '-':z = x-y;
			 break;
		case '*':z = x*y;
		         break;
		case '/':z = x/y;
			 break;
		default:
			 break;
	}
	return z;
}

