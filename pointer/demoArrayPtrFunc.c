#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_SIZE 5

void task()
{
#if 0 
    /* 作业 1*/
    int array1[BUFFER_SIZE] = {1, 2, 3, 4, 5};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array1[%d] = %d\n", idx, array1[idx]);
    }
    printf("\n");
    char array2[BUFFER_SIZE] = {'a', 'b', 'c', 'd', 'e'};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array2[%d] = %d\n", idx, array2[idx]);
    }
    printf("\n");

    char *array3[BUFFER_SIZE] = {"hello", "world", "nihao", "zhangsan", "china"};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %s\n", idx, array3[idx]);
    }
    printf("\n");
    /* 将数组array3排序 */
#endif
}
/* 数组的特性之一：存放相同的数据类型 */
int main(int argc, const char *argv[])
{
#if 0 
    /* 作业 1*/
    int array1[BUFFER_SIZE] = {1, 2, 3, 4, 5};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array1[%d] = %d\n", idx, array1[idx]);
    }
    printf("\n");
    char array2[BUFFER_SIZE] = {'a', 'b', 'c', 'd', 'e'};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array2[%d] = %d\n", idx, array2[idx]);
    }
    printf("\n");
#endif
    char *array3[BUFFER_SIZE] = {"hello", "world", "nihao", "zhangsan", "china"};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("排序前array[%d] = %s\n", idx, array3[idx]);
    }
    printf("\n");
    /* 将数组array3排序 */
    for(int idx2 = 0; idx2 < BUFFER_SIZE - 1; idx2++)
    {
        for(int idx1 = 0; idx1 < BUFFER_SIZE - idx2 - 1; idx1++)
        {
            if(strcmp(array3[idx1], array3[idx1 + 1]) < 0)
            {
                char *temp = array3[idx1];
                array3[idx1] = array3[idx1 + 1];
                array3[idx1 + 1] = temp;
            }
        }
    }
   
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("排序后array[%d] = %s\n", idx, array3[idx]);
    }
    printf("\n");
    return 0;
}