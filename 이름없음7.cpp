#include <stdio.h>
int main()
{
	int i, gugudan;
	
	scanf ("%d", &gugudan);
	
	for (i =0; i <= 9999; i++)
	{
		printf("%d * %d = %d \n", gugudan, i, gugudan*i);
	}

	
	
	
	
	
	return 0;
}
