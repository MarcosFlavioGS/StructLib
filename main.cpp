#include "includes/structlib.hpp"
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

	(void)argc;
	(void)argv;

	STree<int> *tree {new STree(1)};

	tree->insert(2);
	tree->insert(3);
	tree->insert(5);
	tree->insert(4);
	tree->tprint();

	cout << "This is the data: ";
	tree->print();
	cout << endl;

	cout << "This is the data 2: ";
	tree->right->print();
	cout << endl;

	// List
	List<int> *int_list {new List(1)};
	cout << int_list->data << endl;

	List<char> *char_list {new List('a')};
	cout << char_list->data << endl;
	return 0;
}
