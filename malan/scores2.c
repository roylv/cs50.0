#include <stdio.h>
#include <cs50.h>

void chart(int score);
int main(void)
    
{
    const int s=3;
    int scores[3];
    for (int i=0; i<s; i++)
    {
               
        scores[i]=get_int("Scores %i: ", i+1);
        
    }
    
    for (int i=0; i<s; i++)
    {
        
        printf("Score %i: ",i+1);
        chart(scores[i]);
    }
        
}


void chart(int score)
{
    
    for (int i=0; i<score; i++)
    {
        printf("#");
    }
    printf("\n");
}

