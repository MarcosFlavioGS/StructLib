#include "../includes/structlib.hpp"

using namespace std;

template class Tree<int>;
template class Tree<long>;
template class Tree<long long>;
template class Tree<float>;
template class Tree<std::string>;
template class Tree<char>;

template <typename T>
Tree<T>::Tree(void) {
	data = T();
	left = nullptr;
	right = nullptr;
}

template <typename T>
Tree<T>::Tree(T val) {
	data = val;
	left = nullptr;
	right = nullptr;
}

template <typename T>
void Tree<T>::insert_right(T val) {
	right = new Tree(val);
}

template <typename T>
void Tree<T>::insert_left(T val) {
	left = new Tree(val);
}

template <typename T>
void Tree<T>::insert(T val) {
	if (val < data) {
		if (left == nullptr) {
			left = new Tree(val);
		} else {
			left->insert(val);
		}
	} else {
		if (right == nullptr) {
			right = new Tree(val);
		} else {
			right->insert(val);
		}
	}
}

template <typename T>
void Tree<T>::tprint() {
	if (left != nullptr) {
		left->tprint();
	}
	cout << data << endl;
	if (right != nullptr) {
		right->tprint();
	}
}

template <typename T>
void Tree<T>::print() {
	cout << data;
}
