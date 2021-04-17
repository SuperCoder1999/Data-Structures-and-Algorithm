//#include"Head.h"
//
//
//
//
//// 单链表的存储结构
//typedef struct Lnode {
//	int data;   // 节点的数据域
//	struct Lnode* next;// 之能写成struct Lnode* next？？？  节点的指针域
//}Lnode, * Linklist;
//
//
////***********        初始化        ************
//void InitList(Linklist* L)
//{
//	*L = (Linklist)malloc(sizeof(Lnode));
//	if (!(*L))
//		printf("Error");
//	(*L)->next = NULL;
//}
//
////***********       前插法创建单链表        ************
//void CreateList_H(Linklist* L)
//{
//	(*L) = (Linklist)malloc(sizeof(Lnode));
//	if (!(*L))
//		printf("Error");
//	(*L)->next = NULL;
//
//	int n = 0;
//	printf("创建的单链表的长度:");
//	scanf("%d", &n);
//	printf("输入链表每个结点的值:");
//	while (n--)
//	{
//		// 生成新结点*p(这里解引用过后才是一个结点，否则就只是一个地址)
//		Linklist p = (Linklist)malloc(sizeof(Lnode));// p 只是引路的，等到L->next存储了p指向的单元，p就可以作废。进而可以在for循环中不断创建
//		if (!p)
//			printf("%Error");
//		// 给新结点*s的指针域赋值
//		scanf("%d", &p->data);// 这里因为p->data是一个内存变量，所以必须取地址
//		p->next = (*L)->next;// 这两步顺序一定不能乱---先把后面的接到新的上面(后面的结点地址都依托头结点的指针域)
//		(*L)->next = p;// 再将新的接到头结点上
//	}
//}
//
////***********       尾插法创建单链表        ************
//void CreateList_R(Linklist* L)
//{
//	Linklist r;// 头指针不能变动，所以尾指针必须有
//	(*L) = (Linklist)malloc(sizeof(Lnode));
//	if (!(*L))
//		printf("Error");
//	(*L)->next = NULL;
//
//	int n = 0;
//	r = (*L);// 因为头结点的指针域是NULL，所以尾指针只能指向头结点
//	printf("创建的单链表的长度:");
//	scanf("%d", &n);
//	printf("输入链表每个结点的值:");
//	while (n--)
//	{
//		Linklist p = (Linklist)malloc(sizeof(Lnode));
//		if (!p)
//			printf("Error");
//		scanf("%d", &p->data);
//		p->next = NULL;
//		r->next = p;
//		r = p;
//	}
//}
//
////***********       单链表的取值        ************
//void GetElem(Linklist* L)
//{
//	int e = 0;// 用于存放所取的值
//	int i = 0;// 存放所取的位置
//	printf("要找的值:");
//	scanf("%d", &i);
//	//-------------       取值     ----------
//	Linklist p = (*L)->next;// 头结点不能动，需要辅助指针来移动查找;
//		 // 这个辅助指针指向的是第一个结点，不是头结点(L)
//	// 头结点地址是L，L->next存的是第一个结点地址
//	int j = 1;// 计数器，因为p已经指向了第一个结点，所以计数器原位是1
//	while (p && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i)// !p代表i>n的情况--给的位置超出了链表长度
//			   // j>i 表示i<=0的情况---所给i的值不在链表长度应该在的范围内
//		printf("Can't GetElem");
//	else
//	{
//		e = p->data;
//		printf("%d", e);
//	}
//
//	return;
//}
//
////***********       单链表的的按值查找        ************
//void LocateElem(Linklist* L)// 如果是自定义函数，则可以返回类型是Linklist
//{
//	// ----------------      按值查找        ----------
//	int e = 0;
//	printf("要查找的值");
//	scanf("%d", &e);
//	Linklist p = (*L)->next;// 头指针不能移动，所以需要辅助指针；辅助指针指向第一个结点
//	while (p && p->data != e)
//	{
//		p = p->next;
//	}
//	if (!p)
//		printf("Can't Locate");
//	else
//		printf("地址是%p,此地址取值后：%d", p,*p);
//}
//
////***********       单链表的的插入        ************
//void ListInsert(Linklist* L)
//{
//	int i = 0;
//	printf("插入位置:");
//	scanf("%d", &i);
//	Linklist p = (*L);// 辅助指针，这里不同于查找的情况;查找能
//	/*while (i--)------这种只适合i的输入值为有效的情况下
//	{
//		p = p->next;
//	}*/
//	int j = 0;// 这里j=0而不是查找时候的1；因为插入的位置也可能是1
//	while (p && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i - 1)
//		// !p代表位置i大于链表长度n；j>i-1是排除了j=i-1和j<i-1的情况，也就是指i<1
//		// 插入的位置需大于零即可
//		printf("Error");
//	else
//	{
//		Linklist t = (Linklist)malloc(sizeof(Lnode));
//		printf("输入插入数据:");
//		scanf("%d", &t->data);
//		t->next = p->next;
//		p->next = t;
//	}
//}
//
////***********       单链表的的插入        ************
//void ListInsert2(Linklist* L)
//{
//	int i = 0;
//	printf("插入位置:");
//	scanf("%d", &i);
//	Linklist p = (*L);// 辅助指针，这里不同于查找的情况;查找能
//	/*while (i--)------这种只适合i的输入值为有效的情况下
//	{
//		p = p->next;
//	}*/
//	int j = 0;// 这里j=0而不是查找时候的1；因为插入的位置也可能是1
//	while (p && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i - 1)
//		// !p代表位置i大于链表长度n；j>i-1是排除了j=i-1和j<i-1的情况，也就是指i<1
//		// 插入的位置需大于零即可
//		printf("Error");
//	else
//	{
//		Linklist t = (Linklist)malloc(sizeof(Lnode));
//		printf("输入插入数据:");
//		scanf("%d", &t->data);
//		t->next = p->next;
//		p->next = t;
//	}
//}
//
//void ListDelete(Linklist* L)
//{
//	int i = 0;
//	printf("输入删除第几个结点:");
//	scanf("%d", &i);
//	Linklist p = (*L);
//	int j = 0;
//	while (p->next && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!(p->next) || j > i - 1)
//		printf("结点位置无效");
//	else
//	{
//		Linklist q = p->next;
//		p->next = q->next;
//		free(q);
//		q = NULL;
//		printf("Delete seccuss");
//	}
//}
//
//void ListPrint_L(Linklist* L)
//{
//
//	Linklist p = (*L)->next;
//	while (p)
//	{
//		printf("%d", p->data);
//		p = p->next;
//	}
//}
//
//int main()
//{
//	Linklist L;
//	InitList(&L);
//	int a =0;
//	printf("1:初始化\n2：创建单链表（前插法）\n3.创建单链表（尾插法）\n4.取值\n5.查找\n6.插入\n7.删除\n8.输出\n0：退出\n");
//	printf("选择项目：");
//	scanf("%d ", &a);
//	while (a) 
//	{
//			
//			switch (a)
//			{
//			case 1:InitList(&L);// 初始化但链表
//				break;
//			case 2:CreateList_H(&L);// 前插法创建单链表
//				break;
//			case 3:CreateList_R(&L);// 尾插法创建单链表
//				break;
//			case 4:GetElem(&L);// 链表取值
//				break;
//			case 5:LocateElem(&L);// 按值查找
//				break;
//			case 6:ListInsert(&L);// 链表插入
//				break;
//			case 7:ListDelete(&L);
//				break;
//			case 8:ListPrint_L(&L);
//				break;
//			}
//			printf("选择项目：");
//			scanf("%d", &a);
//	}
//	// ListInert2();// 链表插入
//		// 取值和插入没有深入理解循环条件
//	return 0;
//}