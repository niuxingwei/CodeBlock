#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//������ʼ������
void AddNode1( NODE *head, int number)                             //Ϊ�����ʼ��ʹ��ͷ�巨
{
    NODE *p;
    for (  ; number>0; number-- )
    {
        p = (NODE *)malloc(sizeof (NODE));                         //���ٴ洢�ռ䣬������ͷ�ڵ�
        cin>>p->Elem;
        p ->next=NULL;
        p->next = head ->next;
        head->next = p;
    }
}
void AddNode2( NODE *head, int number)                             //Ϊ�����ʼ��ʹ��β�巨
{
    NODE *p, *p2;
     p2 = head;
    for (  ; number>0; number-- )
    {
        p = (NODE *)malloc(sizeof (NODE));                         //���ٴ洢�ռ䣬������ͷ�ڵ�
        cin>>p->Elem;
        while(p2->next!=NULL)
        {
            p2 = p2->next;

        }
         p2 ->next=p;
         p->next=NULL;


    }
}
//��������
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

void DeleteNode( int mink,int maxk, NODE * head)          //ɾ��ָ���ڵ㺯��
{
    NODE *p1, *p2;
    NODE *p3;              //��¼p2λ�ã������ͷſռ�
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
//�������
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

