#ifndef LESSON03_H_INCLUDED
#define LESSON03_H_INCLUDED
 typedef struct node NODE;
 typedef struct node //定义双向循环链表结构体
{
    int content;
    NODE *prior;
    NODE *next;
    int freq;
}NODE;
 void ShowList(NODE *head);
 void ShowList2(NODE *head);
 void locate(NODE *head, int x);
 void OrderList(NODE *head);
 void InitNode (NODE *head, int number);
#endif // LESSON03_H_INCLUDED
