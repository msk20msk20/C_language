#include <stdio.h>

int main(void)
{
    int a, b, c, d, num = 0;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    num = a + b + c + d;
    
    if(num == 0)
    {
    	printf("¸ð");
	}
	else if(num == 1)
    {
    	printf("µµ");
	}
	else if(num == 2)
    {
    	printf("°³");
	}
	else if(num == 3)
    {
    	printf("°É");
	}
	else if(num == 4)
    {
    	printf("À·");
	}
	
    return 0;
}
