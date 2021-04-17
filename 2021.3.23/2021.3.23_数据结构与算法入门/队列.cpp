//---------------------- 队列    顺序队列
//#include<iostream>
//using namespace std;
//const int MAXSIZE = 10;
//typedef int ElemType;
//
//typedef struct SqQueue {
//	ElemType* base;
//	int front, rear;
//}SqQueue;
//
//void InitSqQueue(SqQueue &Q) 
//{
//	Q.base = new ElemType[MAXSIZE];
//	Q.front = Q.rear = 0;
//}
//
//void EnQueue(SqQueue &Q, ElemType e)
//{
//	if((Q.rear + 1) % MAXSIZE != Q.front)
//	{
//		Q.base[Q.rear] = e;
//		Q.rear = (Q.rear + 1) % MAXSIZE;
//	}
//}
//int QueueLength(SqQueue& Q)
//{
//	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
//}
//ElemType GetHead(SqQueue& Q)
//{
//	if(Q.rear!=Q.front)
//		return Q.base[Q.front];
//}
//void DeQueue(SqQueue& Q)
//{
//	if (Q.rear != Q.front)
//		Q.front = (Q.front + 1) % MAXSIZE;
//}
//int main()
//{
//	SqQueue Q;
//	InitSqQueue(Q);
//	cout << "输入队列长度：";
//	int n = 0;
//	cin >> n;
//	cout << "依次输入入队的元素：";
//	while (n--)
//	{
//		ElemType e;
//		cin >> e;
//		EnQueue(Q,e);
//	}
//	cout << endl;
//	int length = QueueLength(Q);
//	cout << QueueLength(Q)<<endl;
//	while (Q.rear!=Q.front)
//	{
//		cout << GetHead(Q)<<"  ";
//		DeQueue(Q);
//	}
//	cout << "\n现在队列长度：" << QueueLength(Q);
//	return 0;
//}



//// --------------队列   链队
//#include<iostream>
//using namespace std;
//
//const int MAXSIZE = 10;
//typedef int ElemType;
//
//typedef struct QNode {
//	ElemType data;
//	struct QNode* next;
//}QNode,*QueuePtr;
//typedef struct {
//	QueuePtr front;
//	QueuePtr rear;
//}LinkQueue;
//
//void InitQueue(LinkQueue& Q)
//{
//	Q.front = Q.rear = new QNode;
//	Q.front->next = NULL;
//}
//
//void EnQueue(LinkQueue& Q, ElemType e)
//{
//	QueuePtr p = new QNode;
//	p->data = e;
//	Q.rear->next = p;
//	p->next = NULL;
//	Q.rear = p;
//}
//
//void DeQueue(LinkQueue& Q, ElemType &e)
//{
//	QueuePtr p = Q.front->next;
//	e = Q.front->next->data;
//	Q.front->next = p->next;
//	if (p == Q.rear)
//		Q.rear = Q.front;
//	delete p;
//}
//
//ElemType GetHead(LinkQueue Q)
//{
//	return Q.front->next->data;
//}
//
//int main()
//{
//	LinkQueue Q;
//	InitQueue(Q);
//	int n = 0;
//	cout << "输入链队的长度：";
//	cin >> n;
//	cout << "依次输入链队元素：";
//	ElemType e;
//	while (n--)
//	{
//		cin >> e;
//		EnQueue(Q, e);
//	}
//	cout << endl;
//	while (Q.front != Q.rear)
//	{
//		DeQueue(Q, e);
//		cout << e<<" ";
//	}
//	if (Q.rear != Q.front)
//		cout << GetHead(Q);
//	else
//		cout << "链队空";
//	return 0;
//}