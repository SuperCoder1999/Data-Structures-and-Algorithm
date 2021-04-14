//#include<iostream>

////---------------   动态分配  顺序栈
//const int MAXSIZE = 100;// #define MAXSIZE 100 
//typedef int ElemType;
//
//
//using namespace std;
//
//typedef struct SqStack {
//	ElemType* base;
//	ElemType* top;
//}SqStack;
//
//bool InitStack(SqStack &S)
//{
//	S.base = new ElemType[MAXSIZE];
//	if (!S.base)
//		return false;
//	S.top = S.base;
//	return true;
//}
//bool Push(SqStack &S,int e)
//{
//	if (S.top - S.base == MAXSIZE)
//		return false;
//	*(S.top++) = e;
//	return true;
//}
//bool Pop(SqStack& S,int &e)// 出栈
//{
//	if (S.top == S.base)
//		return false;
//	e = *(--S.top);
//	return true;
//}
//bool GetTop(SqStack S, int &get)
//{
//	if (S.top == S.base)
//		return false;
//	get = *(S.top - 1);// 不改变栈顶指针
//	return true;
//}
//
//int main()
//{
//	SqStack S;
//	if (!InitStack(S))
//	{
//		printf("初始化失败");
//		return 0;
//	}
//	
//	cout << "元素个数：";
//	int n = 0;
//	cin >> n;
//	int e = 0;
//	cout << "请依次输入n个元素：";
//	while(n--)
//	{
//		cin >> e;
//		if (!Push(S, e))
//		{
//			printf("栈满了");
//			return 0;
//		}
//	}
//	while (S.top != S.base)
//	{
//		int get=0;
//		GetTop(S, get);
//		cout << get << "\t";
//		Pop(S, e);
//	}
//}


////-------------------------- 静态分配的栈
//typedef struct SqStack {
//	ElemType data[MAXSIZE];
//	int top;// 直接将数组元素下标最大的作为栈顶，data[top]就能进行对栈的操作
//};




//  -------------------- 动态分配  链栈

//#include<iostream>
//
//using namespace std;
//
//const int MAXSIZE = 100;
//typedef int ElemType;
//
//typedef struct LinkStack {
//	ElemType data;
//	struct LinkStack* next;
//}LinkStack;
//void LinkStack_Push(LinkStack* &S)
//{
//	cout << "输入链栈长：";
//	int n;
//	cin >> n;
//	cout << "依次输入入栈的元素内容:";
//	while (n--)
//	{
//		LinkStack* p = new LinkStack;
//		cin >> p->data;
//		p->next = S;
//		S = p;
//	}
//}
//ElemType GetTop(LinkStack*& S)
//{
//	while (S->next)
//		return S->data;
//}
//void Pop(LinkStack*& S)
//{
//	LinkStack* p = S;
//	S = S->next;
//	delete p;
//}
//
//int main()
//{
//	LinkStack* S;
//	S = new LinkStack;
//	S->next = NULL;
//	LinkStack_Push(S);
//	while (S->next)
//	{
//		cout << GetTop(S) << "  ";
//		Pop(S);
//	}
//	delete S;
//	return 0;
//}
