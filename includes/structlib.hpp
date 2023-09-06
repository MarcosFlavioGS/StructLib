#pragma one

#include <iostream>
#include <string>

/*
 * Implementation for the Binary Search Tree interface.
*/
template <typename T>
class Tree {
public:
		T data;
		Tree *left;
		Tree *right;

		Tree(void);
		Tree(T val);
		void insert(T val);
		void insert_right(T val);
		void insert_left(T val);
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
