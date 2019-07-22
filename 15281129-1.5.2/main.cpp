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

int Search_num ( char num, char *cen, int len);//�������м��ҵ�������Ԫ�ص�λ��
BiTree *creat(char *pre, char *cen, int len);//�ݹ齨����
void PostOrderTre( BiTree *root);//�������

int main ()
{
    char *pre = new char[MAX];
    char *cen = new char[MAX];
    cout<<"��������������������У�"<<endl;
    cin>>pre; //��������Ԫ��
    cout<<"��������������������У�"<<endl;
    cin >> cen;//��������Ԫ��
   // cout << strlen(cen);
    BiTree *head = creat(pre, cen , strlen(cen));
    cout<<"���������������ս���Ժ������Ϊ��"<<endl;
    PostOrderTre(head);
}
int Search_num ( char num, char *cen, int len)//�ҵ������һ��Ԫ���������λ��
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
     p ->data = *pre;//�����һ��Ϊ���ڵ�
     int index = Search_num(*pre, cen, len);
     p->lchild = creat( pre + 1, cen , index);//�ݹ齫Ԫ�ط�������
     p->rchild = creat(pre + index + 1, cen + index + 1, len - index -1);//�ݹ齫Ԫ�ط����Һ���
     return p; //���ؽ��
}
void PostOrderTre( BiTree *root)//�������
{
    if( root !=NULL)
    {
     PostOrderTre (root->lchild);//�ݹ��������
     PostOrderTre ( root->rchild);//�ݹ�����Һ���
     cout << root->data;     //�������
    }
}
