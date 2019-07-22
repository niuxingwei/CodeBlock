#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//创建初始化链表
void AddNode1( NODE *head, int number)                             //为链表初始化使用头插法
{
    NODE *p;
    for (  ; number>0; number-- )
    {
        p = (NODE *)malloc(sizeof (NODE));                         //开辟存储空间，创建表头节点
        cin>>p->Elem;
        p ->next=NULL;
        p->next = head ->next;
        head->next = p;
    }
}
void AddNode2( NODE *head, int number)                             //为链表初始化使用尾插法
{
    NODE *p, *p2;
     p2 = head;
    for (  ; number>0; number-- )
    {
        p = (NODE *)malloc(sizeof (NODE));                         //开辟存储空间，创建表头节点
        cin>>p->Elem;
        while(p2->next!=NULL)
        {
            p2 = p2->next;

        }
         p2 ->next=p;
         p->next=NULL;


    }
}
//求链表长度
void ListLength(NODE *head)
{
    int len =0;
    NODE *p;
    for (len = 0, p= head->next; p != NULL; len ++)
    {
       p = p->next;
    }

    cout<<len;
}

void DeleteNode( int mink,int maxk, NODE * head)          //删除指定节点函数
{
    NODE *p1, *p2;
    NODE *p3;              //记录p2位置，用来释放空间
    p1 = head;
    p2 = p1 -> next;
    while(p2!=NULL)
    {
        if(p2 ->Elem > mink&&p2->Elem < maxk)
        {
             p3 = p2;
            p1->next = p2 ->next;
            p2 = p1 ->next;
            free(p3);
        }
        else
        {
           p1 = p1 ->next;
           p2 = p1 ->next;
        }
    }

}
//输出函数
void OutPut( NODE * head)
{
    NODE *p;
    p = head ->next;
    while (p != NULL)
    {
        cout <<p->Elem<<" ";
        p = p ->next;
    }
}

