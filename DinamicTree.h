#pragma once
#include<iostream>
#include"Node.h"
using namespace std;
class DinamicTree
{
public:
	Node* root;
	int size;

public:

	DinamicTree();
	~DinamicTree();
	void DeleteTree(Node* p);
	void Insert(int p);//classic insertion
	void MaxInsert(int p);
	void MinIsert(int p);
	void PreOrderPrint();
	void PreOrderPrint(Node* p);
};

