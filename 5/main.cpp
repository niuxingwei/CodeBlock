#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "lesson5.cpp"
#include "lesson5.h"

using namespace std;

int main()
{
    NODE *myNode;
    NODE *p;
    p = (NODE *)malloc(sizeof(NODE));
    p->next=NULL;
    myNode = p;
    int number;//�޶����Ա������
    int iddd;//����Ա������
    int choice;//�û�����ѡ��
    printf("***************��ӭ��***************\n");
        printf("��������Ҫ����Ա����λ��\n");
         cin>>number;
         printf("����������Ա�������������š�ְ��\n");
         addNode(myNode, number);
    while (true) //����ѭ��ֱ���û��������ִ�в���Ϊֹ
    {
         printf("�밴��������ʾ����\n");
         printf("���� 1 ���ɽ�����ʾԱ����Ϣȫ�Խ��� \n");
         printf("���� 2 ���ɽ�����ʾԱ����Ϣɾ������ \n");
         printf("���� 3 ���ɽ�����ʾԱ����Ϣ�������� \n");
         printf("���� 4 ���ɽ�����ʾԱ����Ϣ������� \n");
     cin>>choice;
     switch (choice)
     {
     case 1 : ShowNode(myNode);break;
       case 2 :
             printf("����Ҫɾ��Ա���Ĺ���\n");
              cin>>iddd;
             DeleNode(myNode, iddd);break;//����idɾ��Ա������
         case 3 :
             printf("����Ҫ����Ա���Ĺ���\n");
             cin>>iddd;
             SearchNode(myNode, iddd);//��id����
             break;
           case 4 :
               int amount;//����Ҫ����Ա���ĸ���
                printf("��������Ҫ����Ա���ĸ���\n");
                cin>>amount;
                printf("�����β���Ա�������������š�ְ��\n");
                addNode(myNode, amount);//���Ա����Ϣ
                printf("�����Ժ��Լ�");
                ShowNode(myNode);//��ʾԱ������
                break;
           default :printf("������˼���밴����ʾ����\n");

     }
      printf("***************����'Ctrl + c '�����Ƴ�����***************\n");
}
    return 0;
}

