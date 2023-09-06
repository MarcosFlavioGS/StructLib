#pragma one

#include <iostream>
#include <string>

/*
 * Implementation for the Binary Search Tree interface.
*/
template <typename T>
class STree {
public:
		T data;
		STree *left;
		STree *right;

		STree(void);
		STree(T data);
		void insert(T data);
		void tprint();
		void print();
};

template <typename T>
class List {
public:
		T data;
		List *next;

		List(void);
		List(T data);
};
