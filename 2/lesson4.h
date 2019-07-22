#ifndef LESSON4_H_INCLUDED
#define LESSON4_H_INCLUDED
#define LIST_INIT_SIZE 100
#define LISTINCREASMENT 10

typedef struct
{
    int *elem;
    int length;  //当前长度
    int listsize;  //当前分配的长度
} LIST;
void initList (LIST *List) ;
void addList(LIST *list, int x);
void showList(LIST * list);
void niXu(LIST *list);


#endif // LESSON4_H_INCLUDED
