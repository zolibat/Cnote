/*
一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？*/
//逆运算
//完全平方数 n^2得出得数

#include <stdio.h>
#include "math.h"
int main(int argc, char const *argv[])
{
    long int i,x,y;//数，x+100平方，x+268平方
    for (i = 0; i < 100000; i++)
    {
        x = sqrt(i+100);
        y = sqrt(i+268);
        if (x*x == (i+100) && y*y == (i+268))
        {
            printf("这个数字是%ld\n",i);
        }
    }
    return 0;
}
