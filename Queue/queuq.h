class node{
    public:
        int value;
        node *next;

        node () {
            next = nullptr;
        }
};

class queue{
    public:
        node rear;
        node front;

        void endqueue();
        void dequeue();

        void display();

        queue(){
            rear=front=nullptr;
        }
};

