#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE  32

const int a = 6;

int main()
{
#if 0
    /*数组的初始化*/
    /* 字符数组 */
    char array[BUFFER_SIZE];
    /* 数组初始化 */
    memset(array, 0, sizeof(array));
    int len = sizeof(array);
    printf("len%d\n", len);
#endif

#if 0
    /* 字符数组 */
     char array[BUFFER_SIZE] = "hello world";
     int len = sizeof(array);
     printf("len:%d, array:%s\n", len array);
#endif

#if 0
    /* 字符串数组 */
    char array[BUFFER_SIZE] = "hello world";
    /* 第一个 strlen */
    int len = strlen(array);
    printf("len:%d\n", len);

    /* 第二个 strcpy */
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "zhangsan");//给数组赋值
    printf("name:%s\n", name);
#if 0
    /* 第三个 strcat */
    strcat(name, " is a boy");
    printf("name:%s\n",name);
#endif
    /* 第四个 strcmp */
    char name2[BUFFER_SIZE] = "zhangsaN";
    int ret = strcmp(name, name2);
    printf("ret:%d\n", ret);
#endif

#if 1
    /* 字符串 */
    /* 指针出入 */
    char *ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n", len);
    printf("size:%d\n", size);
    printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n", *ptr, *(ptr+1), ptr);
    *(ptr + 1) = 'H';
    printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n", *ptr, *(ptr+1), ptr);
#endif
    return 0;
}