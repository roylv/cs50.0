#include <cs50.h>
#include <stdio.h>

int counter=0, x=1, y=1;
int main(void)
{
    counter++;
    printf("hello, world!\n");
    printf("%d\n", counter);   
    
    
    if (x<y)
    {
        
        printf("x is less than y\n");
    }
    else 
    {
        if (x>y)
        {
            printf("x is greaer than y\n");
        }
        else
        {
            printf("x is equal to y\n");
            
        }
    }
    
    
    while (counter<10)
    {
        
        printf("%d\t",counter);
        
        counter++;    
    }
    printf("\n");
    
    for (int i=0; i<10; i++)
    {
        printf("hello, world!\n");
        
    }
    
    get_string("counter is: \n");
}

