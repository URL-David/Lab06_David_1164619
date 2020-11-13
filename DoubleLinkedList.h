#pragma once
#include "Node.h";

template <typename T>
class DoubleLinkedList
{
public:
	Node<T>* start;
	Node<T>* end;
	int count;

	DoubleLinkedList() {
		start = nullptr;
		end = nullptr;
		count = 0;
	};

	~DoubleLinkedList() {};

	bool IsEmpty() {
		return count == 0;
	}

	void InsertAtEnd(T new_value) {
		Node<T>* new_node = new Node<T>();
		new_node->value = new_value;

		if (IsEmpty()) {
			start = new_node;
			end = new_node;
		}
		else {
			end->next = new_node;
			new_node->prev = end;
			end = new_node;
		}

		count++;
		return;
	}


	Node<T>* ExtractAtEnd() {

		Node<T>* temp = end;
		if (!IsEmpty()) {
			if (count == 1) {
				end = end->next;
				start = end;
			}
			else {
				Node<T>* pretemp = start;
				temp = pretemp->next;
				while (temp != end) {
					pretemp = temp;
					temp = pretemp->next;
				}
				pretemp->next = temp->next;
				end = pretemp;
			}
			count--;
		}
		return temp;
	}
};

