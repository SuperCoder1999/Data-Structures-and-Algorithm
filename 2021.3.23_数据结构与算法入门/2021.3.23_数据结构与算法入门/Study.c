//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//// 顺序查找及其优化
//typedef struct {
//	int* R;
//	int length;
//}SSTable;
//Search_Seq(SSTable* ST, int key)
//{
//	int i=0;
//	for (i = ST->length-1; ST->R[i] != key; --i)// for (i = ST->length-1; ST->R[i] != key&&i>0; --i)
//	if (i <= 0) 
//		break;//可以优化掉
//	if (i > 0)
//		return i;
//	else 
//		return 0;//因为"未找到"的返回值是 0 ，所以数组arr[0]不用存元素
//}
//
//Search_Seq_2(SSTable* ST, int key)//时间复杂度是O(n),空间复杂度O(1)
//{
//	int i = 0;
//	ST->R[0] = key;
//	for (i = ST->length - 1; ST->R[i] != key; --i);
//	return 0;// 0位置处就存着key，如果在数组中有，则不会查找到ST.R[0]
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6 };// 0 在这里只是为了充数的
//	SSTable ST = { arr,sizeof(arr)/sizeof(arr[0]) };
//	int key = 1;
//	int ret=Search_Seq(&ST,key);
//	if (ret == 0)
//		printf("未找到");
//	else
//		printf("%d", ret);
//	return 0;
//}
//
