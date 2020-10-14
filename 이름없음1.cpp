#include <stdio.h>
int main()
{
	int game;
	int i;
    scanf ("%d", &game);
    
    for(i = 1; i <= game; i++)
    {
    	if (i % 3 == 0)
    	{
			printf ("X ");
		}
		else
		{
			printf ("%d ", i);
		} 
    	
	}	
		return 0;
}
