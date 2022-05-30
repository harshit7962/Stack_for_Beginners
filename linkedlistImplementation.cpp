// We need to implement a stack using Linked List in cpp

//Linked List Structure in cpp
struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

//Stack structure and member functions
struct mystack {
    Node *head;
    int sz;
    
    mystack() {
        size = 0;
        head = NULL;
    }
    
    void push(int x) {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    
    int pop() {
        if(head==NULL) {
            cout << "Buffer Underflow";
            return INT_MIN;
        }
        
        Node *temp = head->next;
        int x = head->data;
        delete head;
        head = temp;
        size--;
        return x;
    }
    
    int top() {
        if(head==NULL) {
            cout << "Buffer Underflow";
            return INT_MIN;
        }
        
        return head->data;
    }
    
    bool isEmpty() {
        return head==NULL;
    }
    
    int size() {
        return sz;
    }
};
