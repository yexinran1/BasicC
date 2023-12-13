#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_SIZE 32
/* 指针 */
int main()
{
#if 0
    /* 定义任何类型变量记得初始化 */
    /* 指针定义*/
    int *ptr = NULL;
#endif


#if 0
    /* 指针的使用： 指针内存存放的是某变量的地址 */
    /* *p就是解引用(读写数据) */
    int a = 5;
    int *p = &a;
    printf("a:%d\n", a);
    printf("&a:%p\n", &a);
    printf("----------------------\n");
    printf("*p = *(&a) %d\n", *(&a));
    printf("*p = %d\n", *p);
    printf("p:%p\n", p);
    printf("&p:%p\n", &p);
    printf("----------------------\n");
    int **ptr = &p;
    printf("ptr:%p\n", ptr);
    printf("*ptr:%p\n", *ptr);
    printf("**ptr:%d\n", **ptr);
    printf("&ptr:%p\n", &ptr);
    printf("----------------------\n");
    int ***pptr = &ptr;
    printf("pptr:%p\n", pptr);
    printf("*pptr:%p\n", *pptr);
    printf("**pptr:%p\n", **pptr);
    printf("***pptr:%d\n", ***pptr);
#endif

#if 0
/* 指针的特性 
    指针占用的内存大小是8个字节（64位操作系统） 
    如果是32位的操作系统是4个字节
*/
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 97;
    len = sizeof(p);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);
    len = sizeof(ptr);
    printf("len:%d\n", len);

    int *ptrInt = &a;
    printf("%d\n", *ptrInt);

    len = sizeof(ptrInt);
    printf("len:%d\n", len);
#endif

#if 0
    /* 指针特性 2：指针和字符串 */
    /* 字符串是区别于字符数组的 */
    char *ptr = "hello world";
    int len = sizeof(ptr);
    printf("%d\n", len);

    /* 获得字符串的长度 */
    int length = strlen(ptr);
    printf("length:%d\n", length);
    printf("%s\n", ptr);

    /* 字符数组的赋值 */
    char name[BUFFER_SIZE] = { 0 };
    strcpy(name, "zhangsan");
    printf("name:%s\n", name);

    /* 给字符串赋值 */
    char *ptr2 = NULL;
     ptr2 = "zhangsan";
    // printf("ptr:%s\n", ptr2);

    //strcpy(ptr2, "zhangsan");
    printf("ptr:%s\n", ptr2);
#endif

/* 堆空间 */
/* void * 是一个万能指针 */
    char *ptr = (char *) malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "zhangsan");
    printf("%s\n", ptr);
    return 0;
}