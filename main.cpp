#include "includes/structlib.hpp"

using namespace std;

int main(int argc, char *argv[]) {

	(void)argc;
	(void)argv;

	STree *tree {new STree(1)};

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
	return 0;
}
