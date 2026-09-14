#include <stdio.h>
#include <stdlib.h>

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* ringht;
	BTDataType data;
}BTNode;

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return 0;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->ringht);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return 0;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->ringht);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return 0;
	}
	PostOrder(root->left);
	PostOrder(root->ringht);
	printf("%c ", root->data);
}

int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->ringht = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->ringht = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->ringht = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->ringht = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->ringht = NULL;

	A->left = B;
	A->ringht = C;

	B->left = D;
	B->ringht = E;

	//PrevOrder(A);//前序遍历
	//InOrder(A);//中序遍历
	PostOrder(A);//后序遍历
	return 0;
}