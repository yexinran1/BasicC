#include<stdio.h>

const int g_num = 10;

int main()
{
    /* 字符数组初始化的两种方式 */
    char buffer1[] = "helloworld";
    buffer1[0] = 'H';
    printf("buffer1:%s, buffer[0]:%c\n", buffer1, buffer1[0]);  

    /* */
    char * ptr = "helloworld";
    printf("ptr[0]:%c, *ptr+1:%c\n", *(ptr + 0), *(ptr+1));
    
    /* 为什么字符串不能改？ 字符串是常量，也是存放在全局区 */
    ptr[0] = 'H';
    printf("ptr[0]:%c\n", ptr[0]);

    
    return 0;
}