#include <iostream>
#include "queue.h"
using namespace std;

int main(int argc, char** argv){
	queue queue1;
	cout<<"This is value before deleting:"<<endl;
	queue1.endqueue(12);
	queue1.endqueue(22);
	queue1.endqueue(52);
	queue1.endqueue(2);
	queue1.endqueue(1);
	queue1.display();
	
	cout<<"This is value after deleting element."<<endl;
	cout<<"Delete number are: "<<queue1.front->value<<endl;
	queue1.dequeue();
	queue1.display();
	
	return 0;
}