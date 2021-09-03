#include <stdio.h>
#include <ctype.h>

int _isupper(int c)
{
	if( isupper(c))
		{printf("%c is uppercase:", c);}

	else
		{ printf("%c is lowercase:", c); }


}