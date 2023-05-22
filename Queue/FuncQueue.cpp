#include <iostream>
#include "queue.h"
using namespace std;

void queue::endqueue(int input){
	node* temp = new node;
	temp->value = input;
	temp->next = NULL;
	if (front == NULL){
		front = temp;
	}
	else{
		rear->next = temp;
	}
	
	rear = temp;
}

void queue::dequeue(){
	if(front == NULL){
		cout<<"Queue is empty!"<<endl;
		return;
	}
	node* temp = front;
	front = front->next;
	delete temp;
}

void queue::display(){
	node* temp = front;
	if((front == NULL) && (rear == NULL)){
		cout<<"Queue is empty"<<endl;
		return;
	}
	cout<<"Queue element are: ";
	while(temp!=NULL){
		cout<<temp->value<<" ";
		temp = temp->next; 
	}
	cout<<endl;
}