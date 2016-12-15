#include <stdio.h>

int main(void)
{
    int normal = 1;
    for (int i=1; i<101; i++, normal=1)
    {
        if (i % 3 < 1)
        {
            printf("Fizz");
            normal = 0;
        }
        if (i % 5 < 1)
        {
            printf("Buzz");
            normal = 0;
        }
        if (normal == 1)
        {
        printf("%i", i);
        }
        printf("\n");
    }
}
