#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2, x3, y3, x4, y4;
	
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	
	if((y2==y3&&x2==x3)||(x2==x3&&y1==y4))
	{
		printf("POINT");
	}
	if(y2==y3||y1==y4||x2==x3)
	{
		printf("LINE");
	}
	if(y2<y3||y1>y4||x2<x3)
	{
		printf("NULL");
	}
	else
	{
		printf("FACE");
	}
	
	return 0;
}
