#pragma once

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Tree
{
private:
	//�ĵ��������ݽṹ(������ָ���)
	string data;//����
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
	//����ѡ�����(������)
	int flag = 0;
	cout << "Please input your choice";
	cin >> flag;

	if (flag == 1)//ȫ��
	{
		//���������Ҷ�ӽ�����ı����ı�����
	}
	else if (flag == 2)//���ؼ��ֵ�
	{
		//����ƥ�������Ҷ�ӽ���Ǻ��ؼ��ֵ��ı�����
	}
}