#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Tree
{
private://�ĵ��������ݽṹ(������ָ���)
	char data;//����
	vector<Tree*>TreeNode;//���ȿɱ�ָ������

	//��������������Ǵ�

public:
	//�ĵ�������
	void CreateTreeAndPrint(Tree* &T);//����һ
	void Insert(Tree* &T);//���ܶ�
	void SearchAndPrintLable(Tree* &T);//������
	void SearchAndPrintTxt(Tree* &T);//������
};

//����һ����������ṹ�����ݻ���
void Tree::CreateTreeAndPrint(Tree* &T)
{
	//�����ļ�·��
	//��ȡ�ļ�
	//����
	//ͼ�λ����
}
//������
void Tree::SearchAndPrintTxt(Tree* &T)
{
	//ѡ��ȫ���������������ؼ��ֵ��ı�
	if ()//ȫ��
	{
		//���������Ҷ�ӽ�����ı����ı�����
	} 
	else//���ؼ��ֵ�
	{
		//����ƥ�������Ҷ�ӽ���Ǻ��ؼ��ֵ��ı�����
	}
}