#pragma one

#include <iostream>

/*
 * Implementation for the Binary Search Tree interface.
*/
class STree {
public:
		int data;
		STree *left;
		STree *right;

		STree(void);
		STree(int data);
		void insert(int data);
		void tprint();
		void print();
};
