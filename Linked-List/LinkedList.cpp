#include <iostream>
#include "lnkls.h"
using namespace std;
	
// Insert to Head Strated
void LinkedList::insertToHead(int input){
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail == NULL)
		tail = head;	
}
// Insert to Head End

//Insert To Tail Strated
void LinkedList::insertToTail(int input){
    Node *newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;
    
    if (tail == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}
//Insert To Tail End

//Innsert After Started
void LinkedList::insertAfter (int input, int after){
    Node *newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;
    
    Node *temp = head;
    while (temp != NULL) {
        if (temp->value == after) {
            if (temp == tail) {
                temp->next = newNode;
                tail = newNode;
            } else {
                newNode->next = temp->next;
                temp->next = newNode;
            }
            break;
        }
        temp = temp->next;
    }
}
//Insert After End

//Delete From Head Started
void LinkedList::deleteFromHead(){
    if (head != NULL) {
        Node *temp = head;
        head = head->next;
        delete temp;
        
        if (head == NULL) {
            tail = NULL;
        }
    }
}
//Delete From Head End

//Delete From Tail Started
void LinkedList::deleteFromTail(){
    if (tail != NULL) {
        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}
//Delete From tail End

//Delete By Value Started
void LinkedList::deleteByValue(int value){
    if (head == NULL) {
        return;
    }
    
    if (head->value == value) {
        deleteFromHead();
        return;
    }
    
    Node *temp = head;
    while (temp->next != NULL) {
        if (temp->next->value == value) {
            Node *toBeDeleted = temp->next;
            temp->next = temp->next->next;
            delete toBeDeleted;
            if (temp->next == NULL) {
                tail = temp;
            }
            return;
        }
        temp = temp->next;
    }
}
//Delete By Value End

// Declaration Print All
void LinkedList::printAll(){
	
	Node *temp = head;
	while (temp != NULL){
		cout << temp->value << "->";
		temp = temp->next;
	}
	
	cout << endl;
}