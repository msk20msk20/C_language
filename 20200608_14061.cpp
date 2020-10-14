#include <stdio.h>

int main(void)
{
    int n, i, j;
    int array[100][100] = {};
    
    scanf("%d", &n);
    
    
    
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=1; j--)
        {
            array[i][j] = (i-1)*n+j;
            printf ("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
