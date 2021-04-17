//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//const int MAXSIZE = 100;
//typedef char ElemType;
//
//using namespace std;
//
//typedef struct Bnode{  // �������������ʣ�1.typedef�������ṹ�壬Ϊɶ�ͽṹ��ֱ�Ӵ���һ���ṹ������ô���ƣ�2.�ṹ��Ƕ�׶���ṹ��ָ�룬Ϊɶ����ʹ�����������������
//	ElemType data;
//	struct Bnode* lchild, * rchild;
//}Bnode,*Btree;
//
//
//void CreateTree(Btree& T)
//{
//	ElemType e;
//	cin >> e;
//	if (e == '#')
//		T = NULL;
//	else
//	{
//		T = new Bnode;
//		T->data = e;
//		CreateTree(T->lchild);// ���򴴽�������
//		CreateTree(T->rchild);
//	}
//}
//
//Btree pre_mid_CreateBtree(ElemType *pre, ElemType *mid, int len)
//{
//	if (len == 0)
//		return NULL;
//	int index = 0;
//	while (mid[index] != pre[0]&&pre[0]!='\n')
//		index++;
//	Btree T = new Bnode;
//	T->data = pre[0];
//	T->lchild = pre_mid_CreateBtree(pre + 1, mid, index);//����һ�������ĳ���len���ж��Ƿ���Ҫ�������
//	T->rchild = pre_mid_CreateBtree(pre + index + 1, mid+index+1, len - index - 1);
//	return T;
//}
//
//void Preorder(Btree T)
//{
//	if (T)
//	{
//		cout << T->data << "  ";
//		Preorder(T->lchild);
//		Preorder(T->rchild);
//	}
//}
//
//void Inorder(Btree T)
//{
//	if (T)
//	{
//		Inorder(T->lchild);
//		cout << T->data << "  ";
//		Inorder(T->rchild);
//	}
//}
//
//void Posorder(Btree T)
//{
//	if (T)
//	{
//		Posorder(T->lchild);
//		Posorder(T->rchild);
//		cout << T->data << "  ";
//	}
//}
//
//
////----------------------- ��α��� -------------
//const int MIN = 2;
//typedef struct SqQyeue {
//	Btree* base;
//	int front;
//	int rear;
//}SqQueue;
//
//void InitSqQueue(SqQueue& Q)
//{
//	Q.base = new Btree[MAXSIZE];
//	Q.front = Q.rear = 0;
//}
//
//void EnQueue(SqQueue& Q, Btree T)
//{
//	if ((Q.rear + 1) % MAXSIZE != Q.front)
//	{
//		Q.base[Q.rear] = T;
//		Q.rear = (Q.rear + 1) % MAXSIZE;
//	}
//}
//bool Empty(SqQueue Q)
//{
//	if (Q.rear == Q.front)
//		return true;
//	else
//		return false;
//}
//Btree Getfront(SqQueue Q)
//{
//	return Q.base[Q.front];
//}
//void Pop(SqQueue& Q)
//{
//	Q.front = (Q.front + 1) % MAXSIZE;
//}
//void LevelTraverse(Btree T)
//{
//	if (T) 
//	{
//		Btree p;
//		SqQueue Q;
//		InitSqQueue(Q);
//		EnQueue(Q, T);
//		while (!Empty(Q))
//		{
//			p=Getfront(Q);
//			Pop(Q);
//			cout << p->data << "  ";
//			if (p->lchild)
//				EnQueue(Q,p->lchild);
//			if (p->rchild)
//				EnQueue(Q, p->rchild);
//		}
//	}
//}
//
//int main()
//{
//	//-------------------- ���򴴽�������   ---------
//	//Btree T;
//	//cout << "�����������������н���ֵ������Ϊ��ʱ����#��";
//	//CreateTree(T);
//
//	// --------------   ����+����  ����������   ----------
//	ElemType pre[MAXSIZE];
//	ElemType mid[MAXSIZE];
//	cin >> pre;
//	cin >> mid;
//	Btree T;
//	int len = strlen(mid);
//	T = pre_mid_CreateBtree(pre, mid, len);
//
//	// ---------   ����  -----------
//	Preorder(T);// �������
//	cout << endl;
//	Inorder(T);// �������
//	cout << endl;
//	LevelTraverse(T);// ��α���-----��Ҫдһ�����е���
//	cout << endl;
//	Posorder(T);// �������
//	cout << endl;
//}