#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "lesson.cpp"

using namespace std;

int main()
{
    NODE *head;
    NODE *p;
    int number;//������������
    p = (NODE *)malloc (sizeof(NODE));//����ͷ���ռ�
    head = p;
    cout <<"��������Ҫ����Ľڵ���Ŀ";
    cin>>number;
    printf("\n");
    cout <<"��������Ҫ����Ľڵ�";
    AddNode2( head,number);  //���ӽ��
    printf("\n");
    cout <<"�����Ժ�Ľڵ�����Ϊ";
    NiXu(head);   //���ĺ������͵�����
    OutPut(head); //�������
    return 0;
}

