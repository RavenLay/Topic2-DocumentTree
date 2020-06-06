#pragma once

#include <vector>
class Tree
{
private:
	//文档树的数据结构(变量、指针等)
	char data;
	//可变指针数组
public:
	//文档树函数
	void CreateTreeAndPrint(Tree &T);//功能一
	void Insert(Tree & T);//功能二
	void SearchAndPrintLable(Tree & T);//功能三
	void SearchAndPrintTxt(Tree &T);//功能四
};

//功能一建树并输出结构，数据机构
void Tree::CreateTreeAndPrint(Tree &T)
{
	//输入文件路径
	//读取文件
	//建树
	//图形化输出
}
//功能四
void Tree::SearchAndPrintTxt(Tree &T)
{
	//选择全部输出还是输出含关键字的文本
	if ()//全部
	{
		//遍历输出各叶子结点是文本的文本内容
	} 
	else//含关键字的
	{
		//遍历匹配输出各叶子结点是含关键字的文本内容
	}
}