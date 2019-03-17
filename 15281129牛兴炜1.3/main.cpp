#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "lesson.cpp"

using namespace std;

int main()
{
    NODE *head;
    NODE *p;
    int number;//定义所需结点数
    p = (NODE *)malloc (sizeof(NODE));//开辟头结点空间
    head = p;
    cout <<"请输入您要加入的节点数目";
    cin>>number;
    printf("\n");
    cout <<"请输入您要加入的节点";
    AddNode2( head,number);  //增加结点
    printf("\n");
    cout <<"调整以后的节点序列为";
    NiXu(head);   //核心函数，就地逆置
    OutPut(head); //遍历输出
    return 0;
}

