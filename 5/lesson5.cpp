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
        p = (NODE *)malloc(sizeof (NODE));                         //���ٴ洢�ռ䣬������ͷ�ڵ�
        cin>>p->name>>p->id>>p->job;
        while(p2->next!=NULL)
        {
            p2 = p2->next;
        }
         p2 ->next=p;//β�巨���Ԫ��
         p->next=NULL;
    }
}

void SearchNode(NODE *head, int Serid)  //�˴�ֻʵ��ͨ��Ա�������ѯ��������������
{
    NODE *p;
    p= head ->next;
    while (p!=NULL)
        {
            if (p->id==Serid)
                {
                    printf("��Ҫ���ҵ�Ա����Ϣ���£�\n");
                    cout <<p->name<<" "<<p->id<<" "<<p->job;
                    break;
                }
                 p = p->next;
        }
}

void DeleNode(NODE *head, int Serid)//�˴�ֻʵ��ͨ��Ա������ɾ����������������
{
    NODE *p;
    NODE *p1;//��¼��ʼλ�ã�����ɾ���ڵ�
    p1= head ;
    p=p1->next;
    while (p!=NULL)
    {
          if (p->id==Serid)
          {
              p1->next = p->next;//����Ԫ��ǰ��
              free(p);
          }
          p=p->next;
          p1= p1->next;
    }
      printf("ɾ���Ժ����Ϣ���£� \n");
      ShowNode(head);

}
void ShowNode(NODE *node)//�������
{
     NODE *p;
     p=node ->next;
     printf("���е�Ա����Ϣ���£�\n");
     while (p!=NULL)
     {
        cout <<p->name<<" "<<p->id<<" "<<p->job;
        printf("\n");
        p=p->next;

     }
}
