//��δ���ʵ�����Ա��ɾ��������������Ϊ��
#include <iostream>
#include "DeleteList.h"
 using namespace std;

int main()
{
    int length=9;
    int Arr[length]={11, 9, 2, 3, 6, 5, 4, 7, 9};//���岢�ҳ�ʼ������
    int number = 6;//������Ҫɾ����Ԫ��
    DeletArr(Arr, number, length);//���ú���
    return 0;
}
