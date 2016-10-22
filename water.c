#include <stdio.h>
#include <cs50.h>

int main(void)

{
    // Asking the user for input
    printf("minutes: ");
    int x = GetInt();
    
    //Calculating the output
    int y = x*12  ;
    
    //Printing the output
    printf("bottles: %i \n", y);
    
}