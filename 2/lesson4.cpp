#include <iostream>
#include <stdlib.h>
#include <stdio.h>



using namespace std;


void initList (LIST *List) //初始化线性表
{
    List->listsize = LIST_INIT_SIZE;
    List ->elem = (int *)malloc (sizeof(int )*List->listsize);
    List->length=0;
}

void addList(LIST *list, int x)//尾插法
{
    list->elem[list->length]=x;
    list->length++;
}


void niXu(LIST *list)
{
    int i=0;
    int j= list->length-1;
    for(i=0, j= list->length-1;i < list->length / 2; i++, j--)//借用临时变量 temp，用以交换。
    {
        int temp = list->elem[i];//采用第一个和最后一个交换，第二个和倒数第二个交换，知道中间两个交换
		list->elem[i] = list->elem[j];
		list->elem[j] = temp;
    }
}


void showList(LIST * list) //顺序输出
{
    int i=0;
    for (;i<list->length;i++)
    {
        cout<<list->elem[i]<<" ";
    }
    printf("\n");
}
