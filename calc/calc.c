#include "main.h"
long double calc(int *x, int *y, char op, char type)
{
	if (type == 'm')
	{

	if (op == '+')
		return sum(x, y);

	else if (op == '-')
        	return sub(x, y);

	else if (op == '*')
        	return mult(x, y);

	else if (op == '/')
        	return divv(x, y);

	else if (op == '^')
        	return poww(x, y);

	else if (op == 'r')
		return roott(x, y);
	else
	{
		printf("'%c' not an operation in this calculator.\n", op);

		exit(0);
	}

	}

	else if (type == 'b')
	{
		if (op == '&')
			return _and(x, y);

		if (op == '|')
			return _or(x, y);

		if (op == '^')
			return _xor(x, y);

		if (op == '~')
			return _not(x);

		if (op == '<')
			return left_shift(x, y);

		if (op == '>')
			return right_shift(x, y);
	}
}
