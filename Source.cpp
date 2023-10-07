#include<iostream>
#include"DinamicTree.h"
using namespace std;
void main() {
	DinamicTree d;
	d.Insert(4);
	d.Insert(2);
	d.Insert(7);
	d.Insert(5);
	d.Insert(8);
	d.Insert(9);
	d.Insert(1);

	d.PreOrderPrint();
	cout << endl;
	system("pause");
}