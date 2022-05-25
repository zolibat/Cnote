/*
企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%，
高于100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？*/
// 分析：  1-=10~10  10-20~7.5  20-40~5  40-60~3  60-100~1.5  100~1
//按照价格区间分在哪个档位，提前计算好档位前的几个档位的利息，判断的时候只用算当前档位的提成了
#include <stdio.h>

//答案：
// main() 
// { 
//     long int i; 
//     int bonus1,bonus2,bonus4,bonus6,bonus10,bonus; 
//     scanf("%ld",&i); 
//     bonus1=100000*0.1;
//     bonus2=bonus1+100000*0.75; 
//     bonus4=bonus2+200000*0.5; 
//     bonus6=bonus4+200000*0.3; 
//     bonus10=bonus6+400000*0.15; 
//     if(i<=100000) //10w
//     bonus=i*0.1; 
//     else if(i<=200000) //20w
//     bonus=bonus1+(i-100000)*0.075; 
//     else if(i<=400000) //40w
//     bonus=bonus2+(i-200000)*0.05; 
//     else if(i<=600000) //60w
//     bonus=bonus4+(i-400000)*0.03; 
//     else if(i<=1000000) //100w
//     bonus=bonus6+(i-600000)*0.015; 
//     else 
//     bonus=bonus10+(i-1000000)*0.01; 
//     printf("bonus=%d",bonus); 
// } 

int main(int argc, char const *argv[])
{
    long int i;
    int b1,b2,b4,b6,b10,b;
    b1 = 100000*0.1;//1
    b2 = b1+100000*0.75;//2
    b4 = b2+200000*0.05;//4
    b6 = b4+200000*0.03;//6
    b10 = b6+400000*0.015;//10

    printf("输入当月利润:");
    scanf("%d",&i);

    //判断档位
    if (i<=100000)
    {
        b = i*0.1;
    }else if (i<200000)
    {
        b = b1+(i-100000)*0.75;
    }else if (i<400000)
    {
        b = b2+(i-200000)*0.05;
    }else if (i<600000)
    {
        b = b4+(i-400000)*0.015;
    }else if (i<1000000)
    {
        b = b6+(i-600000)*0.03;
    }else
    {
        b = b10+(i-1000000)*0.01;
    }
    printf("奖金总数为%d",b);
    return 0;
}
