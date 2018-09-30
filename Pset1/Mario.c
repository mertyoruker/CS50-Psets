#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Height: ");
        while ((n < 1)||(n > 8))
        {
            n = get_int("Height: "); 
        }
    printf("Height: %i\n", n);
    
    
    for (int i = 0; i < n; i++)
    {
        for (int nokta = 0; nokta < n-i-1; nokta++)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
