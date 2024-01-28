#include<stdio.h>
int i=0;

int main()
{
    for (i = 0; i < 10; i++) 
    {
    if (i == 4) 
    {
       break;
    }
    printf("%d\n", i);
    }
    return 0;
}