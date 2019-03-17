#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "lesson03.h"
/*答疑怎么建立fre 和 content的连接*/
using namespace std;
int main()
{
    NODE *head;
    NODE *p;
    int number;
                    //  int x;
    p = (NODE *)malloc(sizeof(NODE));//申请头节点
    p->next = p;
    p ->prior = p;
    head = p;

    printf("请输入您要加入的节点数：\n");
    cin >>number;
    printf("请输入您要加入的节点：\n");
    InitNode(head, number);
                    //  ShowList2(head);
                    // printf("您输入的节点如下：\n");
                    //ShowList(head);

    printf("\n");
    printf("输入您要访问的数字：\n");
                   //cin >>x;
    locate(head,2);
    locate(head,3);
    locate(head,2);
    locate(head,4);
    printf("您的访问频度fre的排序如下：\n");
    OrderList(head);
    ShowList2(head);


}




