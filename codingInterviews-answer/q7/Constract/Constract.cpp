// Constract.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//根据前序遍历和中序遍历重构二叉树
//Author: Terry
//Date:2019.8.22

#include <iostream>

using namespace std;

struct BinaryTreeNode
{
	int m_nValve;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};


BinaryTreeNode* ConstructCore
(
	int* startPerorder,
	int* endPreOrder,
	int* startInorder,
	int* endInorder
)
{
	int rootValue = startPerorder[0];
	BinaryTreeNode* root = new BinaryTreeNode();
	root->m_nValve = rootValue;
	root->m_pLeft = root->m_pRight = nullptr;

	if (startPerorder == endPreOrder)
	{
		if (startInorder == endInorder && *startPerorder == *endPreOrder)
			return root;
		else
			throw exception("Invalid input");
	}

	//在中序遍历序列中找到根节点的值
	int* rootInorder = startInorder;
	while (rootInorder <= endInorder && *rootInorder != rootValue)
		++rootInorder;

	if (rootInorder == endInorder && *rootInorder != rootValue)
		throw exception("Invalid input");

	int leftLength = rootInorder - startInorder;
	int* leftPreorderEnd = startPerorder + leftLength;
	if (leftLength > 0)
	{
		//构建左子树
		root->m_pLeft = ConstructCore(startPerorder + 1, leftPreorderEnd,
										startInorder, rootInorder);
	}
	if (leftLength < endPreOrder - startPerorder)
	{
		//构建右子树
		root->m_pRight = ConstructCore(leftPreorderEnd + 1, endPreOrder,
										rootInorder + 1, endInorder);
	}

	return root;
}
BinaryTreeNode* Construct(int* preorder, int* inorder, int length)
{
	if (preorder == nullptr || inorder == nullptr)
		return nullptr;

	return ConstructCore(preorder, preorder + length - 1,
		inorder, inorder + length - 1);
}



int main()
{
    std::cout << "程序已经内置了根据前序遍历值和中序遍历值来重构二叉树的能力"; 
}

