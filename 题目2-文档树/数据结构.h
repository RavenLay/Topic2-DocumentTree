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
	~Tree();
	//文档树函数
	void CreateTreeAndPrint(Tree* &T);//功能一
	void Insert(Tree* &T);//功能二
	void SearchAndPrintLable(Tree* &T);//功能三
	void SearchAndPrintTxt(Tree* &T);//功能四
};