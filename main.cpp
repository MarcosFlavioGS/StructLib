#include "includes/structlib.hpp"
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

	(void)argc;
	(void)argv;

	// Int tree
	cout << "Trees" << endl;
	cout << "Int Tree: " << endl;
	Tree<int> *tree {new Tree(1)};
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

	// String tree
	cout << "String Tree: " << endl;
	std::string str1 {"Hello"};
	std::string str2 {"World"};
	std::string str3 {"From me"};
	Tree<std::string> *str_tree {new Tree(str1)};
	str_tree->insert_left(str2);
	str_tree->insert_right(str3);
	str_tree->tprint();

	// List
	cout << "Linked lists: " << endl;
	List<int> *int_list {new List(1)};
	cout << int_list->data << endl;

	List<char> *char_list {new List('a')};
	cout << char_list->data << endl;

	std::string my_string {"Hello"};
	List<std::string> *str_list {new List(my_string)};
	cout << str_list->data << endl;
	return 0;
}
