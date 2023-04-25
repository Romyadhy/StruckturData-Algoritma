#include <iostream>
#include "lnkls.h"
using namespace std;

//Main
int main (int argc, char** argv)
{
	// Insert to Head
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	list1.insertToHead(100);
	
	cout << "The output will be like this." << endl;
	cout << "1. INSERT TO HEAD." << endl;
	cout << "head: " << list1.head->value << endl; 
	cout << "tail: " << list1.tail->value << endl; 
	
	cout << "This is how to call value, it's from 100 -> 50 -> 30 -> 20. The output is 20: " << list1.head->next->next->next->value << endl;
	//cout << list1.head->next->next->next->value << endl;	
	list1.printAll();
	
	LinkedList list2;
	
	list2.insertToHead(45);
	list2.insertToHead(56);

	cout << "2. INSERT TO HEAD (DIFERENCE LINKED LIST):  " << endl;
	list2.printAll();
	
	 // Insert to Tail
    list1.insertToTail(8);
    list1.insertToTail(3);
    
    cout << "3. INSERT TO TAIL(8 and 3): " << endl;
    list1.printAll();
    
    // Insert After
    list1.insertAfter(15, 20);
    
    cout << "4. INSERT AFTER(insert 15 after 20): " << endl;
    list1.printAll();
    
    // Delete From Head
    list1.deleteFromHead();
    
    cout << "5. DELETE FROM HEAD(delete 100): " << endl;
    list1.printAll();
    
     // Delete From Tail
    list1.deleteFromTail();
    cout << "6. DELETE FROM TAIL(delete 3): " << endl;
    list1.printAll();

    // Delete By Value
    list1.deleteByValue(15);
    
    cout << "7. DELETE BY VALUE(delete 15): " << endl;
    list1.printAll();
    
	
	return 0;
}
