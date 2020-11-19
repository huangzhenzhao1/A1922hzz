#ifndef test_h
#define test_h
#include <stdio.h>
#include<stdlib.h>
typedef int dataType;
typedef struct node{
dataType data;
struct node *next;
}LinkList;
LinkList *CreateList();
int Size(LinkList *l);
void Inser(LinkList *l,int k, dataType x);
int Empty(LinkList *l);
dataType GetDate(LinkList *l,int k);
LinkList *Find(LinkList *l,dataType x);
void Print(LinkList *l);
void ClearList(LinkList *l)


#endif
