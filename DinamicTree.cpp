#include "DinamicTree.h"
DinamicTree::DinamicTree() {
	root = NULL;
	size = 0;
}

DinamicTree::~DinamicTree() {
	while (root != NULL)
		DeleteTree(root);
}

void DinamicTree::DeleteTree(Node* p) {
	if (p != NULL) {
		DeleteTree(p->left);
		DeleteTree(p->right);
		delete p;
	}
}

void DinamicTree::Insert(int r) {
	if (root == NULL) {
		root = new Node(r);
		size = 1;
		return;
	}
	
	Node* p = root;
	Node* q;
	int lenght = size + 1;
	char put[30];
	int i = 0;
	while (lenght > 3) {
		if (lenght % 2 == 0)
			put[i++] = 'l';
		else put[i++] = 'd';
		lenght /= 2;
	}

	if (lenght % 2 == 0)
		put[i] = 'l';
	else put[i] = 'd';

	while (i > 0) {
		if (put[i] == 'l')
			p = p->left;
		else
			p = p->right;
			i--;
	}

	if (put[i] == 'l') {
		p->left = new Node(p, r);
		q = p->left;
	}
	else {
		p->right = new Node(p, r);
		q = p->right;
	}
	size++;
}

void DinamicTree::MaxInsert(int p) {

}

void DinamicTree::MinIsert(int p) {

}

void DinamicTree::PreOrderPrint() {
	cout << "Preorder: " << endl;
	PreOrderPrint(root);
}

void DinamicTree::PreOrderPrint(Node* p) {
	if (p != NULL) {
		p->Print();
		PreOrderPrint(p->left);
		PreOrderPrint(p->right);
	}
}