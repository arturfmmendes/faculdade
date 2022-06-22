#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(0));
    int num = rand() % 10;
    printf("%d", num);
}