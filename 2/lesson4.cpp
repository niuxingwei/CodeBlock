#include <iostream>
#include <stdlib.h>
#include <stdio.h>



using namespace std;


void initList (LIST *List) //��ʼ�����Ա�
{
    List->listsize = LIST_INIT_SIZE;
    List ->elem = (int *)malloc (sizeof(int )*List->listsize);
    List->length=0;
}

void addList(LIST *list, int x)//β�巨
{
    list->elem[list->length]=x;
    list->length++;
}


void niXu(LIST *list)
{
    int i=0;
    int j= list->length-1;
    for(i=0, j= list->length-1;i < list->length / 2; i++, j--)//������ʱ���� temp�����Խ�����
    {
        int temp = list->elem[i];//���õ�һ�������һ���������ڶ����͵����ڶ���������֪���м���������
		list->elem[i] = list->elem[j];
		list->elem[j] = temp;
    }
}


void showList(LIST * list) //˳�����
{
    int i=0;
    for (;i<list->length;i++)
    {
        cout<<list->elem[i]<<" ";
    }
    printf("\n");
}
