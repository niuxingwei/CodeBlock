#include <iostream>
#include "lesson2.h"
#include <stdlib.h>
#include <stdio.h>

using namespace std;


void NiXu( NODE *head)
 {
     NODE *p1, *p2;       //ָ�����������ʵ��λ�ü�¼
    p2= head->next;
    head->next = NULL;
    while (p2 != NULL)
 {  //�ж�ѭ������
         p1 = p2;
        p2 = p2->next;   //���ڶ����ڵ㿪ʼ˳�����ͷ������
        p1->next = head->next;
        head->next = p1;
    }
 }
void AddNode2( NODE *head, int number)                             //Ϊ�����ʼ��ʹ��β�巨
{
    NODE *p, *p2;
     p2 = head;
    for (  ; number>0; number-- )
    {
        p = (NODE *)malloc(sizeof (NODE));                         //���ٴ洢�ռ䣬������ͷ�ڵ�
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

