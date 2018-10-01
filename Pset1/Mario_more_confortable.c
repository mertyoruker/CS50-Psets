#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int step = get_int("Height: ");
    while ((step < 1) || (step > 8))
    {
        step = get_int("Height: ");
    }
    //Satır yazar
    for(int row = 0; row < step; row++)
    {
        //baştaki space ler
        for(int i = 0; i < step-row-1; i++)
        {
            printf(" ");
        }
        //sol # ler
        for(int j = 0; j <= row; j++)
        {
            printf("#");
        }
        //2 space
        for(int k = 0; k < 2; k++)
        {
            printf("  ");
        }
        //sağ # ler
        for(int l = 0; l <= row; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
