//Linked list class
struct Node 
{
    int info;   //element stored in this node
    Node *next; //Link to the next node
};

class LinkedList
{
    //implementation of a node
    public:
        LinkedList();
        ~LinkedList();
        bool isEmpty();
        void display();
        void add(int);
        void remove(int);

    private:
        Node *first;    //pointer to header (dummy) node
};