#include <cstddef>
#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node *next;
		Node *prev;
		Node(int value): data(value), next(NULL), prev(NULL){}
};

class DoublyLinkList {
	private:
		Node *head;
		int size;
	public:
		DoublyLinkList(): head(NULL), size(0){}
		void insertAtFront(int data);
		void printList();
};

void DoublyLinkList::insertAtFront(int data) {
	Node *new_node = new Node(data);
	if(head != NULL) {
		head -> prev = new_node;
		new_node -> next = head;
	}
	head = new_node;
}

void DoublyLinkList::printList() {
	if(head == NULL) {
		cout << "List is Empty.";
		return;
	}
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

int main() {
	DoublyLinkList list;
	list.insertAtFront(20);
	list.insertAtFront(10);
	list.printList();
	return 0;
}

