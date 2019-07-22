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
    cout <<"请输入您要加入的节点数目：";
    cin>>number;
    printf("\n");
    cout <<"请输入您要加入的节点：";
    AddNode2( head,number);
    OutPut(head);
    printf("\n");
    cout << "请输入要删除节点的范围：";
    cin>>begin >>end;
    cout << "删除后的节点如下：";
    printf("\n");
    DeleteNode(begin, end, head);
    OutPut(head);
    return 0;
}
