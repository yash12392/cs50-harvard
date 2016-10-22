#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int all_row;
    int space;
    int dash;

    do
    {
        printf("Please choose a number from 0 to 23: ");
        height = GetInt();
    }
    while ((height < 0) || (height > 23));

    for (all_row = 1; all_row <= height; all_row++) 
    {
        for (space = (height - all_row); space > 0; space--)
        {
            printf(" "); 
        }
        for (dash = 1; hash <= (all_row + 1); dash++)
        {   
            printf("#"); 
        }
        printf("\n");
    }
    return 0;
}