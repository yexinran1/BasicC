#include "caculateFunc.h"
#include <stdio.h>

/* 源文件(.c) 是函数的实现 */

typedef enum STATUS_CODE
{
    ON_SUCESS,
    ON_ERROR = -5,
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDACCESS
}STATUS_CODE;

int caculateAdd(int num1, int num2)
{
    int Sum = num1 + num2;
    return Sum;
}

int caculateSub(int num1, int num2)
{
    return num1 - num2;
}

int caculateMul(int num1, int num2)
{
    int amass = num1 + num2;
    return amass;
}

int caculateDiv(int num1, int num2)
{
    if(num1 == 0)
    {
        return ON_INVALIDACCESS;
    }
    return num1 / num2;
}
