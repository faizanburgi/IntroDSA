#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void initSLL(Node *tmpHead, int n) {
    tmpHead->data = n;
    tmpHead->next = NULL;
}

void addLast(Node *curr, int n){

    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;

    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newNode;
}

void displayList(Node *curr){
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout<< endl;
}

void addFirst(Node **tmpHead, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *tmpHead;
    *tmpHead = newNode;
}

void removeLast(Node *curr){
    if(curr->next==NULL){
        cout<< "Single Node! Remove Last aborted!";
    }
    else{
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
  }
}

int main() {
    Node *head = new Node;
    initSLL(head, 20);

    addLast(head, 30);
    addLast(head, 40);
    displayList(head);

    addFirst(&head, 10);
    displayList(head);

    removeLast(head);
    displayList(head);


    
    // Node *head2 = new Node;
    // initSLL(head2, 25);

    // Node *head3 = new Node;
    // initSLL(head3, 30);


     
    return 0;
}
