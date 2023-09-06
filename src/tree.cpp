#include "../includes/structlib.hpp"

using namespace std;
template class STree<int>;

template <typename T>
STree<T>::STree(void) {
	data = T();
	left = nullptr;
	right = nullptr;
}

template <typename T>
STree<T>::STree(T val) {
	data = val;
	left = nullptr;
	right = nullptr;
}

template <typename T>
void STree<T>::insert(T val) {
	if (val < data) {
		if (left == nullptr) {
			left = new STree(val);
		} else {
			left->insert(val);
		}
	} else {
		if (right == nullptr) {
			right = new STree(val);
		} else {
			right->insert(val);
		}
	}
}

template <typename T>
void STree<T>::tprint() {
	if (left != nullptr) {
		left->tprint();
	}
	cout << data << endl;
	if (right != nullptr) {
		right->tprint();
	}
}

template <typename T>
void STree<T>::print() {
	cout << data;
}
