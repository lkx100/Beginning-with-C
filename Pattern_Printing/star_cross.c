#include <stdio.h>
int main() {
    int n, m;
    printf("Enter number n (rows) : ");
    scanf("%d", &n);
    printf("Enter number m (columns) : ");
    scanf("%d", &m); 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i==j || i+j == 6)
            {
                printf("* ");
            }
            else printf("  "); 
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}