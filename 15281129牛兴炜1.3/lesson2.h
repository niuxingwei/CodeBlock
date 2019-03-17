#ifndef LESSON2_H_INCLUDED
#define LESSON2_H_INCLUDED

typedef struct node NODE;
typedef struct node //定义结构体
{
    int content;
    NODE *next;
}NODE;

void NiXu( NODE *head);//逆序函数
void OutPut( NODE * head);//输出函数
void AddNode2( NODE *head, int number);//初始化函数


#endif // LESSON2_H_INCLUDED
