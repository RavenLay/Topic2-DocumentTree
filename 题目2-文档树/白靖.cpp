#include "数据结构.h"

//析构函数 释放vector容器内存
Tree::~Tree()
{
	for (vector<Tree*>::iterator it = TreeNode.begin(); it != TreeNode.end(); it++)
	{
		delete *it;
	}
	TreeNode.clear();//清空vector容器
}

//功能一建树并输出结构，数据机构
void Tree::CreateTreeAndPrint(Tree* &T)
{
	//输入文件路径
	//读取文件
	//建树
	//图形化输出
}

//功能四
void Tree::SearchAndPrintTxt(Tree* &T)
{
	//选择全部输出还是输出含关键字的文本
	//功能选择界面(待美化)
	int flag = 0;
	cout << "Please input your choice";
	cin >> flag;

	if (flag == 1)//全部
	{
		//遍历输出各叶子结点是文本的文本内容
	}
	else if (flag == 2)//含关键字的
	{
		//遍历匹配输出各叶子结点是含关键字的文本内容
	}
}