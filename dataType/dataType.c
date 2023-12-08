#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//数据类型
int main()
{
    #if 0
    printf("hello word!\n");
    long bigValue = 0;
    int len = sizeof(bigValue);
    printf("long len: %d,bigVaule= %ld\n", len , bigValue);//%ld用来打印长整型
    //变量的命名：数字，字母，下划线、只能以字母和下划线开头
    //数据类型对应的是内存的存储空间
    //sizeof 计算字节的大小
    int age = 6;  //int 整形 整数 %d打印输出
    len = sizeof(age);
    printf("int len: %d,age= %d\n", len , age);//%d打印整数
   

    short smallValue = 1;
    len = sizeof(smallValue);
    printf("short len: %d,smallValue= %d\n", len , smallValue);
// #if 1
    //浮点数 4个字节
    float weight = 50.5;
    len = sizeof(weight);
    printf("float len: %d,weight= %f\n", len , weight);//%f打印浮点数
// #else 
    double weight2 = 50.5;
    len = sizeof(weight2);
    printf("double len: %d,weight2= %f\n", len , weight2);//%f打印浮点数
// #endif
    char sex = 'm';
    len = sizeof(sex);
    printf("char len :%d,sex=%c\n", len , sex);//%c打印字符
#endif 

#if 0 
    //有符号
    char sex = -1;
    int len = sizeof(sex);
    printf("char len: %d,sex = %c sex = %d\n", len , sex , sex);
    
    char defalt_value=137;
    len = sizeof(defalt_value);
    printf("char len: %d,defalt_value = %c defalt_value = %d\n", len , defalt_value , defalt_value);
    
    //无符号
    unsigned char m_value=-1;
    len = sizeof(m_value);
    printf("char len: %d,m_value = %c m_value = %d\n", len , m_value , m_value);
#endif
#if 0
    //表达式&运算符
    //运算符 +-*/  优先级 先乘除后加减
    int val = 10;
    printf("val: %d\n", val);

    //括号的优先级最高 运算符的优先级用括号的限制
    //后置++
    val++;//val=val+1
    printf("val: %d\n",val);
    
    val--;
    printf("val: %d\n",val);

    //前置++
    ++val;
    printf("val: %d\n",val);

    --val;
    printf("val: %d\n" , val);
    #endif
#if 0
    val = val + 100;
    printf("val: %d\n",val);

    val += 100;
    printf("val: %d\n",val);
#endif

#if 0
    int m_value = 10;
    int discuss = m_value / 3;
    int remainder = m_value % 3;
    printf("discuss: %d\n" , discuss);
    printf("remainder: %d\n" , remainder);

    //随机数
    int randomVal = rand();
    printf("randomVal: %d\n", randomVal);

    //中奖概率是25%
    int lotterRate = randomVal % 4;      //[0-3]
    printf("lotterRate: %d\n", lotterRate);
#endif

#if 0
    int a = 51;// int a = 5 * 2;速度更快
    printf("a: %d\n",a);
    a << 1;
    printf("a: %d\n",a);
#endif

#if 0
    int val = 51;
    int orVal = val | 7;
    int andVal = val & 2;
    printf("orVal: %d\n",orVal);
    printf("andVal: %d\n",andVal);

    int notVal = !val;
    printf("notVal: %d\n",notVal);
#endif 

#if 0
    //且 或 非
    int condition1 = 1;
    int condition2 = 6;

    //或：只有一个条件满足，就返回1
    if((condition1 == 1) || (condition2 == 5))
    {
        printf("hello word\n");
    }
    else
    {
        printf("not hello word\n");
    }

    //且：两边都满足返回1 否则返回0
    if((condition1 == 1) && (condition2 == 5))
    {
        printf("hello word\n");
    }
    else
    {
        printf("not hello word\n");
    }
}
#endif

//运算符 双目运算符 & 三目运算符
//双目运算符
//int a = 7+8

// 
int num1 = 10;
int num2 = 20;
int num3 = (num1 > num2) ? 100 : 666;
printf("num3: %d\n",num3);
return 0;
}