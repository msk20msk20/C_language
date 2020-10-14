#include <stdio.h>

int main(void)
{
	char munja;
	char t = 'a';
	scanf ("%c", &munja);
	do
	{
		printf ("%c ", t);
		t++;
		
	}while(munja >= t);
	
	return 0;
}
