#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "lesson4.h"
#include "lesson4.cpp"

using namespace std;

int main()
{
    LIST newlist;
    int number;//���ԭ������
    int count =0;
    int elem;//���Ԫ��
    initList(&newlist);
        cout << "������Ԫ�صĸ�����";
        cin>>number;
        for (count=0;count<number;count++ )
        {
             cin>>elem;
             addList(&newlist,elem);
        }

    niXu(&newlist);//�����㷨
     cout << "�͵����õĽ��Ϊ��";
    printf("\n");
    showList(&newlist);//�������
    return 0;
}
