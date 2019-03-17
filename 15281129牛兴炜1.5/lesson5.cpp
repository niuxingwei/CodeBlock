#include <iostream>
#include "lesson5.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;



void addNode(NODE *node, int number)
{
    NODE *p, *p2;
     p2 = node;
    for (  ; number>0; number-- )
    {
        p = (NODE *)malloc(sizeof (NODE));                         //开辟存储空间，创建表头节点
        cin>>p->name>>p->id>>p->job;
        while(p2->next!=NULL)
        {
            p2 = p2->next;
        }
         p2 ->next=p;//尾插法添加元素
         p->next=NULL;
    }
}

void SearchNode(NODE *head, int Serid)  //此处只实现通过员工号码查询，其他方法类似
{
    NODE *p;
    p= head ->next;
    while (p!=NULL)
        {
            if (p->id==Serid)
                {
                    printf("您要查找的员工信息如下：\n");
                    cout <<p->name<<" "<<p->id<<" "<<p->job;
                    break;
                }
                 p = p->next;
        }
}

void DeleNode(NODE *head, int Serid)//此处只实现通过员工号码删除，其他方法类似
{
    NODE *p;
    NODE *p1;//记录起始位置，用以删除节点
    p1= head ;
    p=p1->next;
    while (p!=NULL)
    {
          if (p->id==Serid)
          {
              p1->next = p->next;//所有元素前移
              free(p);
          }
          p=p->next;
          p1= p1->next;
    }
      printf("删除以后的信息如下： \n");
      ShowNode(head);

}
void ShowNode(NODE *node)//遍历输出
{
     NODE *p;
     p=node ->next;
     printf("所有的员工信息如下：\n");
     while (p!=NULL)
     {
        cout <<p->name<<" "<<p->id<<" "<<p->job;
        printf("\n");
        p=p->next;

     }
}
