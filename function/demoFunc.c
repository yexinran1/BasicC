#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "caculateFunc.h"
/* 函数参数：可以有 也可以没有 */
/* 函数返回值 可以有也可以没有 
    没有的情况需要写void
    如果有，返回你想返回的数据类型 int char short float double long
*/

/* API Application Programming Interface 接口*/

/* 函数的定义 */
#if 0
//case 1: 没有参数 没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
#endif
#if 0
//case 2: 有参数 没有返回值
/* 函数参数有一定的数据类型 */
void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
    
}
#endif

#if 0
//case3: 有参数有返回值
int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
    return sum;
}
#endif

/* 枚举 也是一种数据类型 */
#if 0
typedef enum STATUS_CODE
{
    ON_SUCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL
}STATUS_CODE;
#endif

#if 0
/* 取别名 */
typedef enum STATUS_CODE STATUS_CODE;       
#endif
int main()
{
#if 0  
    /* 函数的调用 */
    purchaseAppointThing();
    int num1 = 5;
    int num2 = 6;
    /* 函数的使用 */
    myAddNum1(num1, num2 );
    int totalSum = myAddNum2(num1, num2);
    int transFormerPrice = 10;
    if(totalSum > transFormerPrice)
    {
        printf("get a transForm\n");
    }
    else
    {
        printf("i not get\n");
    }
#endif

#if 0
    STATUS_CODE status;
    int len = sizeof(status);
    printf("len:%d\n", len);
#endif
    int num1 = 50;
    int num2 = 60;
    int sum = caculateAdd(num1, num2);
    printf("sum:%d\n", sum);

    int num3 = caculateSub(num1, num2);
    printf("num3:%d\n", num3);

    int amass = caculateMul(num1, num2);
    printf("amass:%d\n", amass);

    int num4 = caculateDiv(num1, num2);
    printf("num4:%d\n", num4);
    return 0;
}