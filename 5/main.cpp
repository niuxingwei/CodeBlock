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
    int number;//限定添加员工数量
    int iddd;//定义员工工号
    int choice;//用户操作选项
    printf("***************欢迎！***************\n");
        printf("请输入您要输入员工的位数\n");
         cin>>number;
         printf("请依次输入员工的姓名、工号、职务\n");
         addNode(myNode, number);
    while (true) //无限循环直到用户不想继续执行操作为止
    {
         printf("请按照以下提示操作\n");
         printf("输入 1 即可进入显示员工信息全显界面 \n");
         printf("输入 2 即可进入显示员工信息删除界面 \n");
         printf("输入 3 即可进入显示员工信息搜索界面 \n");
         printf("输入 4 即可进入显示员工信息插入界面 \n");
     cin>>choice;
     switch (choice)
     {
     case 1 : ShowNode(myNode);break;
       case 2 :
             printf("输入要删除员工的工号\n");
              cin>>iddd;
             DeleNode(myNode, iddd);break;//依据id删除员工数据
         case 3 :
             printf("输入要搜索员工的工号\n");
             cin>>iddd;
             SearchNode(myNode, iddd);//用id搜索
             break;
           case 4 :
               int amount;//定义要插入员工的个数
                printf("请输入您要加入员工的个数\n");
                cin>>amount;
                printf("请依次插入员工的姓名、工号、职务\n");
                addNode(myNode, amount);//添加员工信息
                printf("插入以后以及");
                ShowNode(myNode);//显示员工数据
                break;
           default :printf("不好意思，请按照提示操作\n");

     }
      printf("***************输入'Ctrl + c '即可推出程序***************\n");
}
    return 0;
}

