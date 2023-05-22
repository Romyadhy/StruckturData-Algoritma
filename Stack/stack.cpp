#include <iostream>
#include "stack.h"
using namespace std;

void stack::pushStack(int input){
	node * temp = new node;
	temp->value = input;
	temp->next = top;
	top = temp;
} 

void stack::popStack(){
	if(top == NULL){
		cout << "Stack is underflow";
		return;
	}
	else{
		node* temp	= top;
		top = top->next;
		delete 	temp;
	}
}

void stack::printAll(){
	node* temp = top;
	while(temp!=NULL){
		cout<<temp->value<<"->";
		temp = temp->next;
	}
	
	cout<<endl;
}