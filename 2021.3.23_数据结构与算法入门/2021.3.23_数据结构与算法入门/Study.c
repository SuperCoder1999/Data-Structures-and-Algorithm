//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//// ˳����Ҽ����Ż�
//typedef struct {
//	int* R;
//	int length;
//}SSTable;
//Search_Seq(SSTable* ST, int key)
//{
//	int i=0;
//	for (i = ST->length-1; ST->R[i] != key; --i)// for (i = ST->length-1; ST->R[i] != key&&i>0; --i)
//	if (i <= 0) 
//		break;//�����Ż���
//	if (i > 0)
//		return i;
//	else 
//		return 0;//��Ϊ"δ�ҵ�"�ķ���ֵ�� 0 ����������arr[0]���ô�Ԫ��
//}
//
//Search_Seq_2(SSTable* ST, int key)//ʱ�临�Ӷ���O(n),�ռ临�Ӷ�O(1)
//{
//	int i = 0;
//	ST->R[0] = key;
//	for (i = ST->length - 1; ST->R[i] != key; --i);
//	return 0;// 0λ�ô��ʹ���key��������������У��򲻻���ҵ�ST.R[0]
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6 };// 0 ������ֻ��Ϊ�˳�����
//	SSTable ST = { arr,sizeof(arr)/sizeof(arr[0]) };
//	int key = 1;
//	int ret=Search_Seq(&ST,key);
//	if (ret == 0)
//		printf("δ�ҵ�");
//	else
//		printf("%d", ret);
//	return 0;
//}
//
