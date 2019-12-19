#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h> 
int main(void)
    
{
    string s = get_string("Name: ");
    int n = strlen(s);
    
    printf("length of name is: %i\n",n);
    
    n =0;
    while (s[n] != '\0')
        
    {
        n++;       
        
    }
    printf("length of name is: %i\n",n);
        for (int i = 0; i < strlen(s); i++)
    {
        int c = (int) s[i];
        printf("%c %i\n", s[i], c);
    }
    
    
    printf("After caps:  ");
    for (int i = 0, z = strlen(s); i < z; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + ('a'-'A' ));
        }
        else
        {
           printf("%c", s[i] - ('a'-'A' ));
        }
        
       
    }
    
    
      printf("\nChange: ")   ;
      
     for (int i = 0, z = strlen(s); i < z; i++)
     {
         if (islower(s[i]))
            {
                printf("%c", toupper(s[i]));
            }
            else
            {
                printf("%c", tolower(s[i]));
            }
     }
    printf("\n");
    
    
}
