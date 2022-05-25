/*
输入三个整数x,y,z，请把这三个数由小到大输出*/
//1.给三个数字重新排序
//2.二叉树
//3.数据结构其他排序

//1.给三个数字重新排序
// #include <stdio.h>
// void max(int *a,int* b)
// {
//     int tmp=0;
//     if (*a>*b)//如果x(a)大于y(b)，则调换位置
//     {
//         tmp = *a;
//         *a = *b;
//         *b = tmp;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int x,y,z;
//     printf("输入三个数字：");
//     scanf("%d %d %d",&x,&y,&z);
//     int *a=&x,*b=&y,*c=&z;
//     max(a,c);
//     max(a,b);
//     max(b,c);
//     printf("%d<%d<%d",x,y,z);
//     return 0;
// }


//2.二叉树(中序遍历)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int datatype;
//#define要带;

//二叉树结点结构体
typedef struct node
{
    datatype data;//结点数据
    struct node *lChild;//左子树指针
    struct node *rChild;//右子树指针
}Node,*P_Node;

P_Node NewNode(datatype newdata)//新建结点
{
    //给结点申请空间
    P_Node new = calloc(1,sizeof(Node));
    //数据初始化
    memcpy(&new->data,&newdata,sizeof(datatype));
    //左右指针初始化
    new->lChild = new->rChild = NULL;
    return new;
}

P_Node InTree(P_Node root,P_Node new)//插入到二叉树
{
    //子结点为空，返回new结点，插入到二叉树中
    if (root == NULL)
    {
        return new;
    }
    if (new->data<root->data)//new比当前root小，转到左子树
    {
        root->lChild = InTree(root->lChild,new);
        //InTree(root->lChild   进入此时root的左子树，如果是root，则一直在一个根节点打转.

    }else//new比当前root大，转到右子树
    {
        root->rChild = InTree(root->rChild,new);

    }
    return root;
    //为什么要返回root？
}

P_Node DisplayInorder(P_Node root)//中序遍历
{
    //检查二叉树是否正常
    if (root ==NULL)
    {
        return root;
    }
    DisplayInorder(root->lChild);
    printf("%d\t",root->data);
    DisplayInorder(root->rChild);
    return root;
}

int main(int argc, char const *argv[])
{
    printf("输入三个数字:(一个数字按回车)");
    int num;
    //初始化,设置根节点，数据为第一位输入数据
    scanf("%d",&num);
    P_Node root = NewNode(num);
    //继续添加两个数字
    for (int i = 0; i < 2; i++)
    {
        scanf("%d",&num);
        P_Node new = NewNode(num);
        //连接到二叉树上
        InTree(root,new);
    }
    //中序遍历
    DisplayInorder(root);
    printf("\n");
    return 0;
}
