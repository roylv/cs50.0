#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
/*    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }

*/
//int main(int argc, string argv[])
{
    printf("%i\n",argc);
    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
}
