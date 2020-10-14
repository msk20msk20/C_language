#include <stdio.h>

int main(void)
{
	int n, in[4];
	bool d[301];
	
	for(int i = 1; i <=3; i++)
	{
		scanf("%d", &in[i]);
	}
	scanf("%d", &n);
	
	d[0] = true;
	
	for(int i = 1; i <= 3; i++)
	{
		for(int j = in[i]; j <= n; j++)
		{
			if(d[j-in[i]])
			{
				d[j] = true;
			}
		}
	}
	
	printf("%d", d[n]);
	
	return 0;
}
