#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "lesson03.h"
/*������ô����fre �� content������*/
using namespace std;
int main()
{
    NODE *head;
    NODE *p;
    int number;
                    //  int x;
    p = (NODE *)malloc(sizeof(NODE));//����ͷ�ڵ�
    p->next = p;
    p ->prior = p;
    head = p;

    printf("��������Ҫ����Ľڵ�����\n");
    cin >>number;
    printf("��������Ҫ����Ľڵ㣺\n");
    InitNode(head, number);
                    //  ShowList2(head);
                    // printf("������Ľڵ����£�\n");
                    //ShowList(head);

    printf("\n");
    printf("������Ҫ���ʵ����֣�\n");
                   //cin >>x;
    locate(head,2);
    locate(head,3);
    locate(head,2);
    locate(head,4);
    printf("���ķ���Ƶ��fre���������£�\n");
    OrderList(head);
    ShowList2(head);


}




