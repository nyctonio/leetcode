struct Node {
    int data;
    Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class MyCircularQueue {
    int sz = 0;
    int maxSize;
    Node *head, *tail;
    
public:
    MyCircularQueue(int k) {
        maxSize = k;
        head = tail = NULL;
    }
    
    bool enQueue(int value) {
        if (sz == maxSize) return false;
        if (head == NULL) {
            head = tail = new Node(value);
        } else {
            tail -> next = new Node(value);
            tail = tail -> next;
        }
        sz++;
        return true;
    }
    
    bool deQueue() {
        if (sz == 0) return false;
        Node *temp = head;
        head = head->next;
        sz--;
        return true;
    }
    
    int Front() {
        if (sz == 0) return -1;
        return head -> data;
    }
    
    int Rear() {
        if (sz == 0) return -1;
        return tail -> data;
    }
    
    bool isEmpty() {
        if (sz == 0)
            return true;
        return false;
    }
    
    bool isFull() {
        if (sz == maxSize)
            return true;
        return false;
    }
};
/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */