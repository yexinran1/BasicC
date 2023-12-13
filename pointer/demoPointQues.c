#include<stdio.h>
#include<string.h>


int main()
{
    /* 指针和字符串 */
    char *ptr = "hello world";

    /* 字符串常量 ： */
    /* 1 打印字符串的每一个字符 */
    /* way1:使用for循环 */
#if 0
    char p = '0';
    int len = strlen(ptr);
    printf("len:%d\n", len);
    for(int idx = 0; idx < strlen(ptr); idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d \n", p, idx);
        ptr++;
        printf("strlen(ptr):%ld\n", strlen(ptr));
    }
    //printf("%s\n", ptr);
#elif 0
    int len = strlen(ptr);
    printf("len:%d\n", len);
    char p = '0';
    for(int idx = 0; idx < len; idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d \n", p, idx);
        ptr++;
    }
#elif 0
    /* 实现方式2 */
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
#endif

    char *ptr2 = NULL;
    printf("&ptr:%p\n", &ptr);
#if 1
    printf("字符串地址：%p\n", &("zhangsan"));
    ptr2 = "zhangsan";
#else
    strcpy(ptr2, "zhangsan");
    printf("ptr2地址:%p\n", ptr2);
    printf("ptr2:%s\n", ptr2);
#endif
    return 0;
}