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
//	cout<<"��������ĳ���: ";
//	cin >> n;
//	cout << "�������ݣ�";
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
//	Linklist q = L;// �о����Ǻ��Ͻ�����Ϊ��Ƶ��ͼ�ⰸ���ӵ�һ����㿪ʼ�ģ��������Ǵ�ͷ��㿪ʼ
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
//	cout << "�м���ĵ�ַ��" << ret << "  ��Ӧ��ֵ��" << ret->data << endl;
//}