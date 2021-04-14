//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//const int MAXSIZE = 100;
//typedef char ElemType;
//
//using namespace std;
//
//typedef struct Bnode{  // 这里有两个疑问：1.typedef重命名结构体，为啥和结构体直接创建一个结构变量这么相似；2.结构体嵌套定义结构体指针，为啥不能使用重命名过后的名字
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
//		CreateTree(T->lchild);// 先序创建二叉树
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
//	T->lchild = pre_mid_CreateBtree(pre + 1, mid, index);//返回一个子树的长度len，判断是否需要创建结点
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
////----------------------- 层次遍历 -------------
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
//	//-------------------- 先序创建二叉树   ---------
//	//Btree T;
//	//cout << "先序次序输入二叉树中结点的值（孩子为空时输入#）";
//	//CreateTree(T);
//
//	// --------------   先序+中序  创建二叉树   ----------
//	ElemType pre[MAXSIZE];
//	ElemType mid[MAXSIZE];
//	cin >> pre;
//	cin >> mid;
//	Btree T;
//	int len = strlen(mid);
//	T = pre_mid_CreateBtree(pre, mid, len);
//
//	// ---------   遍历  -----------
//	Preorder(T);// 先序遍历
//	cout << endl;
//	Inorder(T);// 中序遍历
//	cout << endl;
//	LevelTraverse(T);// 层次遍历-----需要写一个队列的类
//	cout << endl;
//	Posorder(T);// 后序遍历
//	cout << endl;
//}