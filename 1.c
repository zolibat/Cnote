/*编写代码
有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？ 
1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 
掉不满足条件的排列。
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,sum=0;//num组成的数字,sum个数总和
    for (int i = 1; i < 5; i++)//百位
    {
        for (int j = 1; j < 5; j++)//十位
        {
            if (j == i)//十位和百位数字相同跳过，当前十位数循环
            {
                continue;
            }
            for (int k = 1; k < 5; k++)//个位
            {
                if (k == i || k == j)//个位与十位或百位数字有相同跳过，当前十位数循环
                {
                    continue;
                }
                num = i*100 + j*10 + k;
                printf("%d\t",num);
                sum++;
            }
        }
        printf("\n");
    }
    printf("能组成%d个互不相同且无重复数字的三位数\n",sum);
    return 0;
}
