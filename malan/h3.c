#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_float("get x: \n");
    float y = get_float("get y: \n");
    printf("x/y= %.10f\n", x/y);


    int n = get_int("int: ");
    //check parity of an int
    if (n%2==0)
    {
        printf("even\n");

    }
    else
    {

        printf("odd\n");
    }
    
    char c = get_char("char: \n");
    if (c=='y' || c=='Y')
        
    {
        
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}
