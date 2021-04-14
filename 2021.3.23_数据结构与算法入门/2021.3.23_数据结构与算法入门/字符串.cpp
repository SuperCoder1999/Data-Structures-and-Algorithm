#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;

////-------------------  BF   ����ö��  --------------
//const int MAXSIZE = 100;
//typedef char ElemType;
//typedef struct {
//	ElemType ch[MAXSIZE];
//	int length;
//}SString;
//
//
//void Index_BF(SString& S, SString& T, int &pos)
//{
//	int j = 0, i = pos;
//	while (i < S.length && j < T.length)// i��j��0��ʼ������С�ڶ������ڣ����i��j����λ�ã�����Ե���
//	{
//		if (S.ch[i] == T.ch[j])
//		{
//			i++; j++;
//		}
//		else
//		{
//			i = i - j + 2; j = 1;
//		}
//	}
//	if (j > T.length-1)
//		pos = i - T.length;
//	else
//		pos = -1;
//}
//int main()
//{
//	SString S,T;
//	strcpy(S.ch, "abcdefg");
//	S.length = strlen(S.ch);
//	strcpy(T.ch, "cde");
//	T.length = strlen(T.ch);
//	int pos=0;
//	Index_BF(S, T, pos);
//	if (pos == -1)
//		cout << "δ�ҵ�";
//	else
//		cout << "pos=" << pos;
//}

//// ------------------------   KMP  �㷨  ----------------
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//const int MAXSIZE = 100;
//typedef char ElemType;
//typedef struct {
//	ElemType ch[MAXSIZE];
//	int length;
//}SString;
//
//void Get_next(SString T,int next[])
//{
//	int j = 1, k = 0;
//	next[1] = 0;
//	while (j < T.length)
//	{
//		if (k == 0 || T.ch[j - 1] == T.ch[k - 1])
//			next[++j] = ++k;
//		else
//			k = next[k];
//	}
//}
//
//bool Index_KMP(SString& S, SString& T, int& pos,int next[])
//{
//	int i = 1, j = 0;
//	while (i <= S.length && j < T.length)
//	{
//		if (S.ch[i] == T.ch[j])
//		{
//			i++; j++;
//		}
//		else
//			j = next[j];
//	}
//	if (j >= T.length)
//	{
//		pos = i-T.length;
//		return true;
//	}
//	else
//		return false;
//}
//
//int main()
//{
//	SString S, T;
//	strcpy(S.ch, "0abaabaabeca");
//	S.length = strlen("0abaabaabeca")-1;
//	strcpy(T.ch, "abaabe");
//	T.length = strlen("abaabe");
//	int next[MAXSIZE] = { 0 };
//	Get_next(T,next);
//	int pos = 1;
//	Index_KMP(S, T, pos,next);
//	if (Index_KMP)
//		cout << "λ���ǣ�" << pos;
//	else
//		cout << "δ�ҵ�";
//}
