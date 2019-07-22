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
}NODE;//定义结构体
 void addNode (NODE *node, int number);//添加数据
 void DeleNode(NODE *head, int id);//删除函数
 void SearchNode(NODE *head, int Seid);//搜索函数
 void ShowNode(NODE *node);//遍历输出函数
#endif // LESSON5_H_INCLUDED
