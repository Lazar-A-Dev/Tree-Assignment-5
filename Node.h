#pragma once
#include<iostream>
using namespace std;
class Node
{
public:
	Node* left, *right, *parent;
	int info;

public:
	Node() {
		left = right = parent = NULL;
		info = 0;
	}

	Node(int info) {
		left = right = parent = NULL;
		this->info = info;
	}

	Node(Node* parent, int info) {
		left = right = NULL;
		this->parent = parent;
		this->info = info;
	}

	Node(Node* left, Node* right, Node* parent,  int info) {
		this->left = left;
		this->right = right;
		this->parent = parent;
		this->info = info;
	}

	~Node() {}

	void Print() {
		cout << info << " ";
	}

	void ChangeInfo(int newInfo) {
		info = newInfo;
	}
};

