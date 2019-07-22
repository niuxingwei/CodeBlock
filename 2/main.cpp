#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "lesson4.h"
#include "lesson4.cpp"

using namespace std;

int main()
{
    LIST newlist;
    int number;//添加原属个数
    int count =0;
    int elem;//添加元素
    initList(&newlist);
        cout << "请输入元素的个数：";
        cin>>number;
        for (count=0;count<number;count++ )
        {
             cin>>elem;
             addList(&newlist,elem);
        }

    niXu(&newlist);//逆序算法
     cout << "就地逆置的结果为：";
    printf("\n");
    showList(&newlist);//遍历输出
    return 0;
}
