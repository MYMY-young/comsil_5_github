#include "LinkedList.h"


template <typename T>
class Stack : public LinkedList<T> {
public:
	bool Delete(T &element) {
		Node<T>* temp;

		if (this->first == NULL) {
			return false;
		}
		temp = this->first;
		element = this->first->data;
		this->first = this->first->link;
		
		delete temp;
		this->current_size--;
		

		return true;
	}
};
