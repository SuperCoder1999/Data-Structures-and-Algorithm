//#include<iostream>

////---------------   ��̬����  ˳��ջ
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
//bool Pop(SqStack& S,int &e)// ��ջ
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
//	get = *(S.top - 1);// ���ı�ջ��ָ��
//	return true;
//}
//
//int main()
//{
//	SqStack S;
//	if (!InitStack(S))
//	{
//		printf("��ʼ��ʧ��");
//		return 0;
//	}
//	
//	cout << "Ԫ�ظ�����";
//	int n = 0;
//	cin >> n;
//	int e = 0;
//	cout << "����������n��Ԫ�أ�";
//	while(n--)
//	{
//		cin >> e;
//		if (!Push(S, e))
//		{
//			printf("ջ����");
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


////-------------------------- ��̬�����ջ
//typedef struct SqStack {
//	ElemType data[MAXSIZE];
//	int top;// ֱ�ӽ�����Ԫ���±�������Ϊջ����data[top]���ܽ��ж�ջ�Ĳ���
//};




//  -------------------- ��̬����  ��ջ

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
//	cout << "������ջ����";
//	int n;
//	cin >> n;
//	cout << "����������ջ��Ԫ������:";
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
