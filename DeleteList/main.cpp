//这段代码实现线性表的删除操作，以数组为例
#include <iostream>
#include "DeleteList.h"
 using namespace std;

int main()
{
    int length=9;
    int Arr[length]={11, 9, 2, 3, 6, 5, 4, 7, 9};//定义并且初始化数组
    int number = 6;//定义想要删除的元素
    DeletArr(Arr, number, length);//调用函数
    return 0;
}
