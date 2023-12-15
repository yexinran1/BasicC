#include<stdio.h>
#include "myString.h"


/* 字符串长度 */
int myStrlen(const char *nums)
{
    int count = 0;
#if 0
    if(*nums == NULL)
    {
        return count;
    }
#else
    if(!nums)
    {
        return count;
    }
    while(*nums != '\0')
    {
        count++;
        nums++;
    }
    return count;
#endif
}

#if 1
 /* 比较字符串 */
int myStrcmp(const char *nums1, const char *nums2)
{
    if( nums1 == NULL || nums2 == NULL)
    {
        return 0;
    }
    int idx = 0;
    while (nums1[idx] == nums2[idx])
    {
        if(nums1[idx] == '\0')
        {
            return 0;
        }
        idx++;
    }  
    return *nums1 - *nums2;
}
#endif

#if 1
/* 字符串的拷贝 */
char *myStrcpy(char *dest, const char *src)
{
    char* originalDest = dest;
    if( src == NULL || dest == NULL)
    {
        return 0;
    }
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return originalDest;
}
#endif

#if 1
char *myStrcat(char *dest, const char *src)
{
    char* originalDest = dest;
    if( src == NULL || dest == NULL)
    {
        return 0;
    }
    while(*dest != '\0')
    {
        dest++;
    }
    myStrcpy(dest,src);
    return originalDest;
}
#endif
