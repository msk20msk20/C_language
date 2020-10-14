#include <stdio.h>

int main(void)
{
	int n, m, i, num = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		
		if(m % 2 == 0)
		{
			num++;
		}
	}
	
	printf("%d", num);
	
	return 0;
}
