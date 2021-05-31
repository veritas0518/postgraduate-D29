//#include<stdio.h>
//#include<stdlib.h>
//
//#define  MAXLEN  128
//
//typedef  struct
//{
//	char  data;
//	int  lchild;
//	int  rchild;
//}  StaticLinkNode;
//
//typedef  struct
//{
//	StaticLinkNode  List[MAXLEN];
//	int  root;
//}  StaticLinkList;
//
//typedef  struct  bt
//{
//	char  data;
//	struct  bt* lchild;
//	struct  bt* rchild;
//}  BT;
//
//BT* StaticLinkList2BT(StaticLinkList* SLL, int  i)
//{
//	if (i != -1)
//	{
//		BT* T;
//		T = (BT*)malloc(sizeof(BT));
//		T->data = SLL->List[i].data;
//		T->lchild = StaticLinkList2BT(SLL, SLL->List[i].lchild);
//		T->rchild = StaticLinkList2BT(SLL, SLL->List[i].rchild);
//		return  T;
//	}
//	return  NULL;
//}
//
//
//void  change(BT* root, BT* BinaryTree, int* n)//输入参数为二叉树的根结点root,一维数组BinaryTree，数组长度i
//{
//	if (root != NULL) {
//		change(root->lchild, BinaryTree, n);
//		BinaryTree[*n] = *root;
//		*n = *n + 1;
//		change(root->rchild, BinaryTree, n);
//	}
//}
//
//int  main(void)
//{
//	int  N = 0, M = 0, i = 0;
//	StaticLinkList  SLL;
//	BT* T;
//	BT  BinaryTree[MAXLEN];
//	scanf("%d%d", &N, &SLL.root);
//	for (i = 0; i < N; i++)
//	{
//		getchar();
//		scanf("%c%d%d", &SLL.List[i].data, &SLL.List[i].lchild, &SLL.List[i].rchild);
//	}
//	T = StaticLinkList2BT(&SLL, SLL.root);//将以静态链表存储的链表转化为二叉链表
//	change(T, BinaryTree, &M);
//	if (M != 0)
//	{
//		for (i = 0; i < M; i++)
//		{
//			printf("%c  ", BinaryTree[i].data);
//		}
//		printf("\n");
//	}
//	else
//	{
//		printf("Binary  trees  are  empty!\n");
//	}
//	return  0;
//}
