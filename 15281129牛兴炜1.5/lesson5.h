#ifndef LESSON5_H_INCLUDED
#define LESSON5_H_INCLUDED
using namespace std;
typedef struct noode NODE;
typedef struct noode
{
    char  name[10];
    char job[10];
    int  id;
    NODE *next;
}NODE;//����ṹ��
 void addNode (NODE *node, int number);//�������
 void DeleNode(NODE *head, int id);//ɾ������
 void SearchNode(NODE *head, int Seid);//��������
 void ShowNode(NODE *node);//�����������
#endif // LESSON5_H_INCLUDED
