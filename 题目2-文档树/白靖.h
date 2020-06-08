#pragma once

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Tree
{
private:
	//文档树的数据结构(变量、指针等)
	string data;//数据
	vector<Tree*>TreeNode;//长度可变指针数组

	//新增函数声明标记处

public:
	//文档树函数
	void CreateTreeAndPrint(Tree* &T);//功能一
	void Insert(Tree* &T);//功能二
	void SearchAndPrintLable(Tree* &T);//功能三
	void SearchAndPrintTxt(Tree* &T);//功能四
};

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