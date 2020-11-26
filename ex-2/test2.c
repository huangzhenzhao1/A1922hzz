#include "1.h"

int mian (int argc, char **argv)
{
SQ *sq = (SQ *)malloc(sizeof(SQ));
initsort(sq);
creatsort(sq);
printf("原始数据为:\n");
printsort(*sq);
printf("冒泡排序后:\n");
bubblesort(*sq);
printf("插入排序后:\n");
insertsort(*sq);
printf("选择排序后:\n");
selectsort(*sq);
printf("快速排序g后:\n");
QuickSort(*sq);
printf("原始数据为:\n");
printsort(*sq);

return 0;
}
