//#include"Head.h"
//
//
//
//
//// ������Ĵ洢�ṹ
//typedef struct Lnode{
//	int data;   // �ڵ��������
//	struct Lnode* next;// ֮��д��struct Lnode* next������  �ڵ��ָ����
//}Lnode,*Linklist;
//
//
////***********        ��ʼ��        ************
//void InitList()
//{
//	// ����ͷָ��
//	Linklist L;
//	// �����½����Ϊͷ��㣬����ͷָ��Lָ��ͷ���--ͷ����ǲ���ֵ��
//	L = (Linklist)malloc(sizeof(Lnode));
//	if (!L)
//		printf("Error");// ���ڴ�С���豸�ϣ����ܿ���ʧ��
//	// ͷ����ָ�����ÿ�
//	L->next = NULL;
//}
//
////***********       ǰ�巨����������        ************
//void CreateList_H()
//{
//	Linklist L;
//	L = (Linklist)malloc(sizeof(Lnode));
//	if (!L)
//		printf("Error");
//	L->next = NULL;
//	
//	int n = 0;
//	printf("�����ĵ�����ĳ���:");
//	scanf("%d", &n);
//	printf("��������ÿ������ֵ:");
//	while(n--)
//	{
//		// �����½��*p(��������ù������һ����㣬�����ֻ��һ����ַ)
//		Linklist p = (Linklist)malloc(sizeof(Lnode));// p ֻ����·�ģ��ȵ�L->next�洢��pָ��ĵ�Ԫ��p�Ϳ������ϡ�����������forѭ���в��ϴ���
//		if (!p)
//			printf("%Error");
//		// ���½��*s��ָ����ֵ
//		scanf("%d", &p->data);// ������Ϊp->data��һ���ڴ���������Ա���ȡ��ַ
//		p->next = L->next;// ������˳��һ��������---�ȰѺ���Ľӵ��µ�����(����Ľ���ַ������ͷ����ָ����)
//		L->next = p;// �ٽ��µĽӵ�ͷ�����
//	}
//}
//
////***********       β�巨����������        ************
//void CreateList_R()
//{
//	Linklist r;// ͷָ�벻�ܱ䶯������βָ�������
//	Linklist L = (Linklist)malloc(sizeof(Lnode));
//	if (!L)
//		printf("Error");
//	r = L ;
//	L->next = NULL;
//
//	int n = 0;
//	printf("�����ĵ�����ĳ���:");
//	scanf("%d", &n);
//	printf("��������ÿ������ֵ:");
//	while(n--)
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
////***********       �������ȡֵ        ************
//void GetElem()
//{
//	Linklist L = (Linklist)malloc(sizeof(Lnode));
//	L->next = NULL;
//	int n = 0;// ���������ȣ�ͷ��㲻�ڳ����ڣ�
//	scanf("%d", &n);
//	printf("��������ÿ������ֵ:");
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		scanf("%d", &s->data);
//		s->next = NULL; // ������˳������ν
//		L->next = s;
//	}
//	int e = 0;// ���ڴ����ȡ��ֵ
//	int i = 0;// �����ȡ��λ��
//	printf("Ҫ�ҵ�ֵ:");
//	scanf("%d", &i);
//	//-------------       ȡֵ     ----------
//	Linklist p = L->next;// ͷ��㲻�ܶ�����Ҫ����ָ�����ƶ�����;
//	     // �������ָ��ָ����ǵ�һ����㣬����ͷ���(L)
//	// ͷ����ַ��L��L->next����ǵ�һ������ַ
//	int j = 1;// ����������Ϊp�Ѿ�ָ���˵�һ����㣬���Լ�����ԭλ��1
//	while (p && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i)// !p����i>n�����--����λ�ó�����������
//			   // j>i ��ʾi<=0�����---����i��ֵ����������Ӧ���ڵķ�Χ��
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
//
////***********       ������ĵİ�ֵ����        ************
//void LocateElem()// ������Զ��庯��������Է���������Linklist
//{
//	Linklist L = (Linklist)malloc(sizeof(Lnode));
//	L->next = NULL;
//	Linklist r = L;
//	int n = 0;
//	printf("������������:");
//	scanf("%d", &n);
//	printf("��������ÿ������ֵ:");
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		scanf("%d", &s->data);
//		s->next = NULL;
//		r->next = s;
//	}
//	// ----------------      ��ֵ����        ----------
//	int e = 0;
//	printf("Ҫ���ҵ�ֵ");
//	scanf("%d", &e);
//	Linklist p = L->next;// ͷָ�벻���ƶ���������Ҫ����ָ�룻����ָ��ָ���һ�����
//	while (p&&p->data!=e)
//	{
//		p = p->next;
//	}
//	if (!p)
//		printf("Can't Locate");
//	else
//		printf("��ַ��%p", p);
//}
//
////***********       ������ĵĲ���        ************
//void ListInsert()
//{
//	Linklist L = (Linklist)malloc(sizeof(Lnode));
//	L->next = NULL;
//	int n = 0;
//	printf("�����ĵ�����ĳ���:");
//	scanf("%d", &n);
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		s->next = L->next;
//		L->next = s;
//	}
//	// ----------------      ���������        ----------
//	int i = 0;
//	printf("����λ��:");
//	scanf("%d", &i);
//	Linklist p = L;// ����ָ�룬���ﲻͬ�ڲ��ҵ����;������
//	/*while (i--)------����ֻ�ʺ�i������ֵΪ��Ч�������
//	{
//		p = p->next;
//	}*/
//	int j = 0;// ����j=0�����ǲ���ʱ���1����Ϊ�����λ��Ҳ������1
//	while (p && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i - 1)
//// !p����λ��i����������n��j>i-1���ų���j=i-1��j<i-1�������Ҳ����ָi<1
//// �����λ��������㼴��
//		printf("Error");
//	else
//	{
//		Linklist t = (Linklist)malloc(sizeof(Lnode));
//		printf("�����������:");
//		scanf("%d", &t->data);
//		t->next=p->next;
//		p->next = t;
//	}
//}
////***********       ������ĵĲ���        ************
//void ListInsert2()
//{
//	Linklist L = (Linklist)malloc(sizeof(Lnode));
//	L->next = NULL;
//	int n = 0;
//	printf("�����ĵ�����ĳ���:");
//	scanf("%d", &n);
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		s->next = L->next;
//		L->next = s;
//	}
//	// ----------------      ���������        ----------
//	int i = 0;
//	printf("����λ��:");
//	scanf("%d", &i);
//	Linklist p = L;// ����ָ�룬���ﲻͬ�ڲ��ҵ����;������
//	/*while (i--)------����ֻ�ʺ�i������ֵΪ��Ч�������
//	{
//		p = p->next;
//	}*/
//	int j = 0;// ����j=0�����ǲ���ʱ���1����Ϊ�����λ��Ҳ������1
//	while (p && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i - 1)
//		// !p����λ��i����������n��j>i-1���ų���j=i-1��j<i-1�������Ҳ����ָi<1
//		// �����λ��������㼴��
//		printf("Error");
//	else
//	{
//		Linklist t = (Linklist)malloc(sizeof(Lnode));
//		printf("�����������:");
//		scanf("%d", &t->data);
//		t->next = p->next;
//		p->next = t;
//	}
//}
//
//
//void ListDelete()
//{
//	Linklist L = (Linklist)malloc(sizeof(Lnode));
//	L->next = NULL;
//	Linklist r = L;
//	int n = 0; 
//	printf("���봴������ĳ���:");
//	scanf("%d", &n);
//	printf("���봴������Ԫ�ص�ֵ��");
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		scanf("%d", &s->data);
//		r->next = s;
//		s->next = NULL;
//	}
//
//	int i = 0;
//	printf("����ɾ���ڼ������:");
//	scanf("%d", &i);
//	Linklist p=L;
//	int j=0;
//	while (p && j < i - 1)
//		p = p->next;
//	if (!p || j > i - 1)
//		printf("���λ����Ч");
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
//void ListPrint_L()
//{
//	Linklist L = (Linklist)malloc(sizeof(Lnode));
//	L->next = NULL;
//	Linklist r = L;
//	int n = 0;
//	printf("������������:");
//	scanf("%d", &n);
//	printf("�����������ֵ:");
//	while (n--)
//	{
//		Linklist s = (Linklist)malloc(sizeof(Lnode));
//		scanf("%d", &s->data);
//		s->next = r->next;
//		r->next = s;
//		r = s;
//	}
//	Linklist p = L->next;
//	while (p)
//	{
//		printf("%d", p->data);
//		p = p->next;
//	}
//}
//
//
//
//int weilexiedulidaima()
//{
//	int a = 0;
//	printf("1:��ʼ��\n2������������ǰ�巨��\n3.����������β�巨��\n4.ȡֵ\n5.����\n6.����\n7.ɾ��\n8.���\n0���˳�\n");
//	scanf("%d", &a);
//	while(a)
//	switch (a)
//	{
//	case 1:InitList();// ��ʼ��������
//		break;
//	case 2:CreateList_H();// ǰ�巨����������
//		break;
//	case 3:CreateList_R();// β�巨����������
//		break;
//	case 4:GetElem();// ����ȡֵ
//		break;
//	case 5:LocateElem();// ��ֵ����
//		break;
//	case 6:ListInsert();// �������
//		break;
//	case 7:ListDelete();
//		break;
//	case 8:ListPrint_L();
//		break;
//	}
//// ListInert2();// �������
//	// ȡֵ�Ͳ���û���������ѭ������
//	return 0;
//}