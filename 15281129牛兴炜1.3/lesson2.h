#ifndef LESSON2_H_INCLUDED
#define LESSON2_H_INCLUDED

typedef struct node NODE;
typedef struct node //����ṹ��
{
    int content;
    NODE *next;
}NODE;

void NiXu( NODE *head);//������
void OutPut( NODE * head);//�������
void AddNode2( NODE *head, int number);//��ʼ������


#endif // LESSON2_H_INCLUDED
