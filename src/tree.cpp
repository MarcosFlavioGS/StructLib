#include "../includes/structlib.hpp"

using namespace std;

STree::STree(void) {
	data = 0;
	left = nullptr;
	right = nullptr;
}

STree::STree(int val) {
	data = val;
	left = nullptr;
	right = nullptr;
}

void STree::insert(int val) {
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

void STree::tprint() {
	if (left != nullptr) {
		left->tprint();
	}
	cout << data << endl;
	if (right != nullptr) {
		right->tprint();
	}
}

void STree::print() {
	cout << data;
}
