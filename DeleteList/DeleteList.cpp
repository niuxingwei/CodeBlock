#include <iostream>
using namespace std;
void  DeletArr(int Arr[],int Elment , int  Length)//定义删除元素函数
{
   for(int i=0; i< Length ;i++)
   {
       if(Elment ==Arr[i])
       {
           Elment =i;
           break;
       }
   }
  for(int j= Elment; j< Length-1; j++)
  {
      Arr[j]=Arr[j+1];
  }
  Length--;
   for (int j=0;j<Length;j++)
    {
      cout<<Arr[j]<<" ";
    }

}
