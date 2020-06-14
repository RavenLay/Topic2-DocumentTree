#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stack>
using namespace std;

class Tree
{
private:
	//文档树的数据结构(变量、指针等)
	string data;//数据
	vector<Tree>TreeNode;//长度可变指针数组

	//新增函数声明标记处

public:
	//文档树函数
	Tree(string str="", int pos = 0);//构造函数（功能一）
	void Insert();//功能二
	void SearchAndPrintLable();//功能三
	void SearchAndPrintTxt();//功能四
};