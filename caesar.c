#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("Please give me a valid input!");
        return 1;
    }
    else
    {
        //Converting the string into int
        int k = atoi(key) % 26 ;
        if (k == 0)
        {
            printf("Invalid key, please try again\n");
            return 1;
        }
    
            // Asking the user to enter string
        
            string p = GetString();
            if (p != NULL)
            {
                for (int i = 0, n = strlen(p); i < n; i++)
                {
                    int c = 0;
                
                    // Checking if entered string is Uppercase
                
                    if (isupper(p[i]))
                    {
                        c = (((int)p[i] - 65 + k) % 26) + 65;
                        printf("%c", (char) c);
                    }
                    else if (islower(p[i]))
                    {
                        c = (((int)p[i] - 97 + k) % 26) + 97;
                        printf("%c", (char) c);
                    
                    }
                    else
                    {
                        printf("%c", p[i]);
                    }
                }
                printf("\n");
                return 0;
                
            }
       
    }
}
