//#include<iostream>
//using namespace std;
//typedef struct Lnode
//{
//	int data;
//	struct Lnode* next;
//}Lnode, * Linklist;
//
//void CreateList_R(Linklist& L)
//{
//	L = (Linklist)malloc(sizeof(Lnode));
//	L->next = NULL;
//	Linklist r = L;
//	int n = 0;
//	cout<<"创建链表的长度: ";
//	cin >> n;
//	cout << "链表内容：";
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		cin >> s->data;
//		s->next = NULL;
//		r->next = s;
//		r = s;
//	}
//}
//void PrintList_L(Linklist L)
//{
//	Linklist p = L->next;
//	while (p)
//	{
//		cout << p->data << endl;
//		p = p->next;
//	}
//}
//Linklist FindMiddle(Linklist& L)
//{
//	Linklist p = L;
//	Linklist q = L;// 感觉不是很严谨，因为视频中图解案例从第一个结点开始的；而这里是从头结点开始
//	while (p && p->next)
//	{
//		p = p->next->next;
//		q = q->next;
//	}
//	return q;
//}
//int main()
//{
//	Linklist L;
//	CreateList_R(L);
//	Linklist ret = FindMiddle(L);
//	PrintList_L(L);
//	cout << "中间结点的地址：" << ret << "  对应的值：" << ret->data << endl;
//}