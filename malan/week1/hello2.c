#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //string name = get_string("What is your name?\n");
    char name[20];
    printf("Hello. What's your name?\n");
    fgets(name,20,stdin);
    printf("Hi there, %sthat's a nice name", name);
    //int x = name - '0';
    //
    int y;
    //int x = sscanf(name, "%d", &y);
   // printf("%d\n", x);
    
   y = atoi(name); // Using atoi()
   printf("\nThe value of y : %d\n", y);
}
