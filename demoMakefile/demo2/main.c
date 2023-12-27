#include <stdio.h>
extern int myAdd(int num1, int num2);
extern int mySub(int num1, int num2);
extern int myMul(int num1, int num2);
extern int myDiv(int num1, int num2);

int main()
{
    int num1 = 100;
    int num2 = 20;
    int ret = myAdd(num1, num2);
    printf("ret:%d\n", ret);
    return 0;
}