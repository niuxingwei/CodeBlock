#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "lesson1.h"
#include "lesson1.cpp"
using namespace std;

int main()
{
    NODE *head;
    NODE *p;
    int begin ;
    int end;
    int number;
    p= (NODE *)malloc(sizeof(NODE));
    p ->next = NULL;
    head = p;
    cout <<"��������Ҫ����Ľڵ���Ŀ��";
    cin>>number;
    printf("\n");
    cout <<"��������Ҫ����Ľڵ㣺";
    AddNode2( head,number);
    OutPut(head);
    printf("\n");
    cout << "������Ҫɾ���ڵ�ķ�Χ��";
    cin>>begin >>end;
    cout << "ɾ����Ľڵ����£�";
    printf("\n");
    DeleteNode(begin, end, head);
    OutPut(head);
    return 0;
}
