#include <stdio.h>
#include <stdlib.h>

int printString()
{
    int ret = 0;
    printf("printf string\n");
    return ret;
}
int selectChoice(int choice)
{
    switch (choice)
    {
        case 1:
            printf("print 1\n");
            break;
        case 2:
            printf("print 2\n");
            break;
        default:
            break;
    }
}

int main()
{
    int num1 = 2;

    printf("num1:%d\n", num1);
    printString();
    selectChoice(num1);
    return 0;
}