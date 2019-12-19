#include <cs50.h>
#include <stdio.h>
void printHashR(int j, int h2);
void printHashL(int j, int h2);
int main(void)
{
    char h[20];
    int h2=0;
    
    do
        {
            printf("Height: ");
            fgets(h, 20, stdin);
            h2=atoi(h);
        }
    while (h2<1 || h2>8);
    int j=1;
    for( ; j<=h2; j++)
    {
        printHashL(j,h2);
        //printf("#");
        printf("  ");

        printHashR(j,h2);
        printf("\n");
    }
        /*
        for(int i=0;i<j;i++)
        {
            printf("#");


        }
    
    
        for(int i=0;i<(h2-j);i++)
        {
            printf("%i",i);


        }

    */
    
    
    
    
    
    
    
    
    
    /*for(int i=0;i<h2;i++)
        {
            printf(" ");


        }*/

}

void printHashR(int j, int h2)
{
   

        for(int i=0;i<j;i++)
        {
            printf("#");


        }
    
    
        for(int i=0;i<(h2-j);i++)
        {
            //printf("%i",i);
            printf(" ");


        }

    
     
}

void printHashL(int j, int h2)
{
   

    for(int i=0;i<(h2-j);i++)
        {
            printf(" ");


        }
    for(int i=0;i<j;i++)
        {
            printf("#");


        }

    
     
}


