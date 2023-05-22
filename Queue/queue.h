class node{
    public:
        int 	value;
        node 	*next;

        node () {
            next=NULL;
        }
};

class queue{
    public:
        node* rear;
        node* front;

        void endqueue(int value);
        void dequeue();

        void display();

        queue(){
            front=rear=nullptr;
        }
};

