#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, m;
    double num = 0;
    
    scanf("%d %d", &n, &m);
    
    num = n + m;
    
    if(n - m > num)
    {
    	num = n - m;
	}
	else if(m - n > num)
    {
    	num = m - n;
	}
	else if(n * m > num)
	{
		num = n * m;
	}
	else if(n / m > num)
	{
		num = n / m;
	}
	else if(m / n > num)
	{
		num = m / n;
	}
	
	printf("%lf", num);
    
    return 0;
}
