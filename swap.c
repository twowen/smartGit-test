#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swap (int *a, int *b)
{
	int c = *a;

	if (a = NULL || b == NULL)
		return (-1);

	*a = *b;
	*b = c;

	return 0;
}
