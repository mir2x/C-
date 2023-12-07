#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int value):data(value), next(NULL){}
};

class LinkedList{
	private:
		Node *head;
		int size;
	public:
		LinkedList():head(NULL), size(0){}
		void insertAtFront(int data);
		void insertAtBack(int data);
		void insertAtPosition(int position, int data);
		void search(int data);
		void deleteAtFront();
		void deleteAtBack();
		void deleteAtPosition(int position);
		void count();
		void printList();
};

void LinkedList::insertAtFront(int data) {
	Node *new_node = new Node(data);
	if(head != NULL) new_node->next = head;
	head = new_node;
	size++;
}

void LinkedList::insertAtBack(int data) {
	Node *new_node = new Node(data);
	new_node->next = NULL; 
	if(head == NULL) 
		head = new_node;
	else {
		Node *temp = head;
		while(temp->next != NULL) temp = temp->next;
		temp->next=new_node;
	}
	size++;
}

void LinkedList::insertAtPosition(int position, int data) {
	if(position > size + 1 || position < 1) {
		cout << "Invalid Index. Value cannot be inserted at position " << position << "\n";
		return;
	}
	Node *new_node = new Node(data);
	if(position == 1) {
		if(head != NULL) 
			new_node->next = head;
		head = new_node;
	}
	else {
		int count = 0;
		Node *temp = head;
		Node *temp_prev = NULL;
		while (count <= position - 2) {
			temp_prev = temp;
			temp = temp->next;
			count++;
		}
		new_node->next = temp;
		temp_prev->next = new_node;
	}
	size++;
}

void LinkedList::search(int data) {
	Node *current = head;
	while(current != NULL) {
		if(data == current->data) {
			cout << "Data is found in the List" << "\n";
			return;
		}
		current = current -> next;
	}
	cout << "Data is not found in the list" << "\n";
}
void LinkedList::count() {
	cout << size << "\n";	
}

void LinkedList::deleteAtFront() {
	if(head == NULL) {
		cout << "No data in the List to be deleted";
		return;
	}
	Node *temp = head;
	head = head->next;
	free(temp);
	size--;
}

void LinkedList::deleteAtBack() {
	if(head == NULL) {
		cout << "No data in the List to be deleted";
		return;
	}
	Node *temp = head;
	Node *temp_prev = NULL;
	while(temp->next != NULL){
		temp_prev = temp;
		temp = temp->next;
	}
	temp_prev->next = NULL;
	free(temp);
	size--;
}
void LinkedList::deleteAtPosition(int position) {
	if(position > size + 1 || position < 1) {
		cout << "Invalid Index. Value cannot be deleted at position " << position << "\n";
		return;
	}
	if(head == NULL) {
		cout << "No data in the List to be deleted";
		return;
	}
	if(position == 1) {
		deleteAtFront();
		return;
	}
	else {
		int count = 0;
		Node *temp = head;
		Node *temp_prev = NULL;
		while (count <= position - 2) {
			temp_prev = temp;
			temp = temp->next;
			count++;
		}
		temp_prev->next = temp->next;
		free(temp);
	}
	size--;
}

void LinkedList::printList() {
	if(head == NULL) {
		cout << "List is Empty" << "\n";
		return;
	}
	Node *current = head;
	while(current != NULL) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << "\n";
}

int main(){
	LinkedList list;
	list.insertAtFront(20);
	list.insertAtFront(10);
	list.insertAtBack(30);
	list.insertAtPosition(4, 40);
	list.search(20);
	list.printList();
	list.count();
	list.deleteAtFront();
	list.printList();
	list.count();
	list.deleteAtBack();
	list.printList();
	list.count();
	list.deleteAtPosition(1);
	list.printList();
	list.count();
	list.deleteAtPosition(1);
	list.printList();
	list.count();
	return 0;
}


