#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#define MAX 60
using namespace std;
typedef struct BiTree
{
    char data;
    BiTree *lchild;
    BiTree *rchild;
}BiTree;

int Search_num ( char num, char *cen, int len);//在中序中间找到先序首元素的位置
BiTree *creat(char *pre, char *cen, int len);//递归建造树
void PostOrderTre( BiTree *root);//后序遍历

int main ()
{
    char *pre = new char[MAX];
    char *cen = new char[MAX];
    cout<<"请输入二叉树的先序序列："<<endl;
    cin>>pre; //输入先序元素
    cout<<"请输入二叉树的中序序列："<<endl;
    cin >> cen;//输入中序元素
   // cout << strlen(cen);
    BiTree *head = creat(pre, cen , strlen(cen));
    cout<<"建立二叉树的最终结果以后序输出为："<<endl;
    PostOrderTre(head);
}
int Search_num ( char num, char *cen, int len)//找到先序第一个元素在中序的位置
{
    int i =0;
    for (i =0; i < len; i ++)
        if ( num == cen[i])
        {
               return i;
        }
     return 0;
}
BiTree *creat(char *pre, char *cen, int len)
{
     if ( len <= 0)
     {
        return 0;
     }
     BiTree *p = new BiTree;
     p = (BiTree *) malloc ( sizeof ( BiTree));
     p ->data = *pre;//先序第一个为根节点
     int index = Search_num(*pre, cen, len);
     p->lchild = creat( pre + 1, cen , index);//递归将元素放入左孩子
     p->rchild = creat(pre + index + 1, cen + index + 1, len - index -1);//递归将元素放入右孩子
     return p; //返回结点
}
void PostOrderTre( BiTree *root)//后序遍历
{
    if( root !=NULL)
    {
     PostOrderTre (root->lchild);//递归遍历左孩子
     PostOrderTre ( root->rchild);//递归遍历右孩子
     cout << root->data;     //输出数据
    }
}
