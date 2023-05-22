class node{
	public:
		int value;
		node *next;
		
		node () {
			next = NULL;
		}
};

class stack{
	public:
		node *top;
		
		void pushStack(int);
		void popStack();
		
		void printAll();
		
		stack(){
		top = NULL;
		}
};