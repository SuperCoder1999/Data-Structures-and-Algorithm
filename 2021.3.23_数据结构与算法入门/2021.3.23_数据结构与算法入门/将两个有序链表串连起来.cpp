#include"Head.h"


//// 将升序的俩链表串连成一个升序的链表
//typedef struct Lnode{
//	int data;
//	struct Lnode* next;
//}Lnode,*Linklist;
//void CreateList_H(Linklist &La,int n)
//{
//	La = (Linklist)malloc(sizeof(Lnode));
//	(La)->next = NULL;
//	printf("链表内容：");
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		scanf("%d", &s->data);
//		s->next = (La)->next;
//		(La)->next = s;
//	}
//}
//void CreateList_R(Linklist &Lb,int n)
//{
//	Lb = (Linklist)malloc(sizeof(Lnode));
//	(Lb)->next = NULL;
//	Linklist r = Lb;
//	printf("链表内容:");
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		scanf("%d", &s->data);
//		s->next = NULL;
//		r->next = s;// 一直都是这一步错误，没有将尾指针向后移
//		r = s;
//	}
//}
//void Merge(Linklist La, Linklist Lb, Linklist &Lc)
//{
//	Lc = La;// 把La指向的头结点作为Lc的头结点
//	Linklist p = La->next;
//	Linklist q = Lb->next;// 两个移动的指针都指向第一个结点
//	Linklist r = Lc;// 新链表的尾指针--指向的是头结点
//	while (p && q)
//	{
//		if (p->data >= q->data)
//		{
//			r->next = q;
//			r = q;// 这两步顺序不能乱
//			q = q->next;
//
//		}
//		else
//		{
//			r->next = p;
//			r = p;
//			p = p->next;
//		}
//	}
//	r->next=(p ? p : q);// 相当于:if(p) r->next=p;else r-next=q;
//	//free(Lb);// 删除Lb链表中的头结点	
//	//Lb = NULL;
//}
//void ListPrint_L(Linklist Lc)
//{
//	Linklist p = (Lc)->next;
//	printf("合并结果\n");
//	while (p)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//}
//int main()
//{
//	Linklist La;
//	Linklist Lb;
//	Linklist Lc;
//
//	printf("这是头插法！\n");
//	int n1 = 0;
//	printf("输入链表长度：");
//	scanf("%d", &n1);
//	CreateList_H(La,n1);
//	printf("\n");
//	printf("这是尾插法!\n");
//	int n2 = 0;
//	printf("输入链表长度");
//	scanf("%d", &n2);
//	CreateList_R(Lb,n2);
//	printf("\n");
//	Merge(La, Lb, Lc);
//	ListPrint_L(Lc);
//	return 0;
//}