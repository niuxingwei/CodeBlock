#ifndef LESSON1_H_INCLUDED
#define LESSON1_H_INCLUDED
typedef struct node  NODE;
typedef struct node                      //自定义类型node类型结构体
{
   int Elem;
   NODE *next;

}NODE;
void AddNode2( NODE *head, int number) ;
void AddNode( NODE *head , int number);
void OutPut( NODE * head);
void ListLength(NODE *head);
void DeleteNode(int mink,int maxk, NODE *head);
#endif // LESSON1_H_INCLUDED
