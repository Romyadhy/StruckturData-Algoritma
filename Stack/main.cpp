#include <iostream>
#include "stack.h"
using namespace std;

int main(int argc, char** argv){
	stack try1;
	try1.pushStack(20);
	try1.pushStack(40);
	try1.pushStack(10);
	try1.pushStack(70);
	try1.pushStack(50);
	cout <<"top: " <<try1.top->value<<endl; 	
	
	try1.printAll();
	
	try1.popStack();
	try1.printAll();
}