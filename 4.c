/*
输入某年某月某日，判断这一天是这一年的第几天？*/
//单独输入年月日，

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year,momth,day,n;
    printf("输入年月日，计算这一天是这一年的第几天？（2002年4月12日例2002.4.12）：");
    scanf("%d.%d.%d",&year,&momth,&day);
    switch (momth)//按月份
    {
    case 12:
        n = day;
    case 11:
        if (momth>11)
        {
            n = n+30;
        }else
        {
            n = day;
        }
    case 10:
        if (momth>10)
        {
            n = n+31;
        }else
        {
            n = day;
        }
    case 9:
        if (momth>9)
        {
            n = n+30;
        }else
        {
            n = day;
        }
    case 8:
        if (momth>8)
        {
            n = n+31;
        }else
        {
            n = day;
        }
    case 7:
        if (momth>7)
        {
            n = n+31;
        }else
        {
            n = day;
        }
    case 6:
        if (momth>6)
        {
            n = n+30;
        }else
        {
            n = day;
        }
    case 5:
        if (momth>5)
        {
            n = n+31;
        }else
        {
            n = day;
        }
    case 4:
        if (momth>4)
        {
            n = n+30;
        }else
        {
            n = day;
        }
    case 3:
        if (momth>3)
        {
            n = n+31;
        }else
        {
            n = day;
        }
    case 2:
        if (momth>2)
        {
            n = n+28;
        }else
        {
            n = day;
        }
    case 1:
        if (momth>1)
        {
            n = n+31;
        }else
        {
            n = day;
        }
    }
    if (year%4 == 0 && momth>2)//闰年加一天
    {
        n++;
    }
    printf("%d年%d月%d日是今年的第%d天\n",year,momth,day,n);
}
