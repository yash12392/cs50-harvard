#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{   
    
    string name = GetString();
      
    
    // Printing the obvious first character of the string
        printf("%c", toupper(name[0]));
    
    // Creating a loop for other initials
    
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        
    //If statement nested in a loop
        if(name[i] == ' ' && name[i+1] != '\0')
        {
            printf("%c",toupper(name[i+1]));
            i++;
        }  
    }
    printf("\n");
}