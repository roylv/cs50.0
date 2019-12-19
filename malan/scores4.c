#include <stdio.h>
#include <cs50.h>

void chart(int count, int scores[]);
int main(void)
    
{
    const int s=3;
    int scores[3];
    for (int i=0; i<s; i++)
    {
               
        scores[i]=get_int("Scores %i: ", i+1);
        
    }
     chart(s, scores);
  /*  for (int i=0; i<s; i++)
    {
        
        printf("Score %i: ",i+1);
        chart(scores[i]);
    }*/
        
}


void chart(int count, int scores[])
{
    
    for (int i=0; i<count; i++)
    {
        for (int j=0; j<scores[i]; j++)
        {
            printf("#");    
        }
          printf("\n");
    }
  
}

