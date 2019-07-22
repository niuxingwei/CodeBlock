#include <iostream>
#include "lesson2.h"
#include <stdlib.h>
#include <stdio.h>

using namespace std;


void NiXu( NODE *head)
 {
     NODE *p1, *p2;       //指针变量，用来实现位置记录
    p2= head->next;
    head->next = NULL;
    while (p2 != NULL)
 {  //判断循环条件
         p1 = p2;
        p2 = p2->next;   //将第二个节点开始顺序插入头结点后面
        p1->next = head->next;
        head->next = p1;
    }
 }
void AddNode2( NODE *head, int number)                             //为链表初始化使用尾插法
{
    NODE *p, *p2;
     p2 = head;
    for (  ; number>0; number-- )
    {
        p = (NODE *)malloc(sizeof (NODE));                         //开辟存储空间，创建表头节点
        cin>>p->content;
        while(p2->next!=NULL)
        {
            p2 = p2->next;

        }
         p2 ->next=p;
         p->next=NULL;
    }
}
void OutPut( NODE *head)
{
    NODE *p;
    p = head ->next;
    while (p)
    {
        cout <<p->content<<" ";
        p = p ->next;
    }

}

