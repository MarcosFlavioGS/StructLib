#include "../includes/structlib.hpp"

template class List<int>;
template class List<long>;
template class List<long long>;
template class List<float>;
template class List<std::string>;
template class List<char>;

template <typename T>
List<T>::List(void) {
	data = T();
	next = nullptr;
}

template <typename T>
List<T>::List(T value) {
	data = value;
	next = nullptr;
}
