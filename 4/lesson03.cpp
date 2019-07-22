#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "lesson03.h"

using namespace std;

void InitNode (NODE *head, int number)  //添加节点
 {
     NODE *p1, *p2;
     p1 = head;
     int i =0;
         for (i=0;i<number; i++)
             {
                 p2= (NODE *)malloc(sizeof (NODE));
                 p2->next =NULL;
                 p2->prior= NULL;
                 cin >>p2->content;
                 p2->freq = 0; //答疑：为什么不赋值第二位fre乱码
                 while (p1 ->next!=head)
                 {
                     p1 = p1->next;
                 }
                 p1->next=p2;
                 p2->prior = p1;
                 p2->next = head;
                 head ->prior= p2;
             }
 }

 void ShowList(NODE *head)  //依据content进行输出
 {
     NODE  *p2;
     p2=head->next;
     while (p2!=head)
     {
         cout<<p2->content<<" ";
         p2 = p2->next;
     }
 }

 void locate(NODE *head, int x)  //对某元素 X进行访问
 {
    NODE *p2;
    p2=head->next;

    while(p2!=head)
    {
         if (p2->content== x)
        {
              p2 -> freq ++;
               break;
        }
         p2 = p2->next;
    }


 }
void OrderList(NODE *head)//依据访问频度fer进行排序
{

    NODE *p1 = head;
    NODE *p2=head->next;

        while(p1->next != head)
        {
            p2 = p1->next;
             while(p2->next!=head&&p2->prior != head && (p2->prior->freq <=p2->freq ))//依据fre 对content 进行排序
             {
                    int tmp = 0;
               tmp = p2->content ;
               p2->content  = p2->prior->content ;
               p2->prior->content  = tmp;
               p2 = p2->prior;
            }
             p1 = p1->next;
        }


}

  void ShowList2(NODE *head) //测试fer 函数
 {
     NODE  *p2;
     p2=head->next;
     while (p2!=head)
     {
         cout<<p2->freq<<" ";
         p2 = p2->next;
     }
 }
