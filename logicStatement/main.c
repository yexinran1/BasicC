#include <stdio.h>
#include<stdlib.h>
#include <time.h>
//状态码
enum STATUS_CODE
{
    REGISTER,
    LOGIN,
    QUIT
};

//宏定义  
//代码规范 宏定义全部大写
#define COUNT_NUM 10
#define RANGE_NUM 200

int main()
{
//判断语句
#if 0
    //判断语句
    int budget = 5000;
    
    int applephe = 8999;
    int mi14pro = 4399;
    int huaweip60 = 6000;

    if (budget > applephe)
    {
        printf("get a applephone!\n");
    }
    else if(budget > mi14pro)
    {
        printf("get a mi14pro\n");

    }
    else if(budget > huaweip60)
    {
        printf("get a huaweip60\n");
    }
    
#endif

#if 0
    int budget = 5000;
    
    int minbudget = 4000;
    int maxbudget = 8000;
    int applephe = 8999;
    int mi14pro = 4399;
    int huaweip60 = 6000;

    //只要有一个条件被满足，成立
    if((budget < applephe) || (budget > mi14pro))
    {
        printf ("i am happy,get a phone\n");
    }
    else 
    {
        printf("i am sad\n");
    }

    if((minbudget < budget) && (budget < maxbudget))
    {
        printf("success get a phone\n" );
    }
    else 
    {
        printf("error get a phone\n");
    }
#endif

//代码规范1: 一个函数尽量不要超过80行 最多不要超过120行

#if 0
    //每一个case 都需要有break
    int choice = 0;
    printf("请输入你的选项:");
    scanf("%d", &choice);

    switch (choice)
    {
    case REGISTER:
        {
            //如果case里面的语句过多，一定需要加上{}来包含
            printf("welcome to register\n");
        }
        break;
    case LOGIN:
        printf("welcome to login\n");
        break;
    case QUIT:
        printf("welcome to quit\n");
        break;
    default:
        printf("input choice invalid\n");      
        break;
    }

#endif

#if 0
    srand(time(NULL));

    //请写一个100 以内的数[1-100]
    //循环
    //代码规范 循环不使用index 用inx/index
    //代码规范 不允许使用魔鬼数字
    int randomNum = 0;
    for(int idx = 0 ; idx < COUNT_NUM ; idx++)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }
    

#endif

#if 0
    srand(time(NULL));
    //编码规范 变量尽量使用驼峰式命名
    int circleTimes = COUNT_NUM >> 1;
    int randomNum = 0;
    //一定需要有退出的条件
    while(circleTimes)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }

#endif

#if 0
    //用处：常使用在宏函数中
    int varaNum = 0;
    do
    {
        printf("varaNum:%d]\n", varaNum);
    }while (varaNum);

#endif

    
    return 0;
}