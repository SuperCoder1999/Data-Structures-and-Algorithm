#include"Head.h"
// �����������������һ�����������
typedef struct Lnode{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;
void CreateList_H(Linklist* La,int n)
{
	*La = (Linklist)malloc(sizeof(Lnode));
	(*La)->next = NULL;
	printf("�������ݣ�");
	while (n--)
	{
		Linklist s = (Linklist)malloc(sizeof(Lnode));
		scanf("%d", &s->data);
		s->next = (*La)->next;
		(*La)->next = s;
	}
}
void CreateList_R(Linklist* Lb)
{
	*Lb = (Linklist)malloc(sizeof(Lnode));
	(*Lb)->next = NULL;
	printf("����β�巨!\n");
	Linklist r = *Lb;
	int n = 0;
	printf("����������");
	scanf("%d", &n);
	printf("��������:");
	while (n--)
	{
		Linklist s = (Linklist)malloc(sizeof(Lnode));
		scanf("%d", &s->data);
		s->next = NULL;
		r->next = s;
	}
}
void Merge(Linklist La, Linklist* Lb, Linklist* Lc)
{
	*Lc = La;// ��Laָ���ͷ�����ΪLc��ͷ���
	Linklist p = La->next;
	Linklist q = (*Lb)->next;// �����ƶ���ָ�붼ָ���һ�����
	Linklist r = *Lc;// �������βָ��--ָ�����ͷ���
	while (p && q)
	{
		if (p->data >= q->data)
		{
			r->next = q;
			r = q;// ������˳������
			q = q->next;

		}
		else
		{
			r->next = p;
			r = p;
			p = p->next;
		}
	}
	r=p ? p : q;// �൱��:if(p) r->next=p;else r-next=q;
	free(*Lb);// ɾ��Lb�����е�ͷ���	
	*Lb = NULL;
}
void ListPrint(Linklist* Lc)
{

}
int Chuan()
{
	Linklist La;
	Linklist Lb;
	Linklist Lc;

	printf("����ͷ�巨��\n");
	int n1 = 0;
	printf("��������ȣ�");
	scanf("%d", &n1);
	CreateList_H(&La,n1);

	CreateList_R(&Lb,n2);
	Merge(La, &Lb, &Lc);
	ListPrint_L(&Lc);
	return 0;
}