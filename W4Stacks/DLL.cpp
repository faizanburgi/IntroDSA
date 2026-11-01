#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

void initDLL(Node *tmpHead, int n) {
    tmpHead->data = n;
    tmpHead->next = NULL;
    tmpHead->prev = NULL; 
}

void addLast(Node *curr, int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    // newNode->prev = 

    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newNode;

    newNode->prev = curr;

}

void displayList(Node *curr){
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout<< endl;
}

void displayReverse(Node *curr){

    cout<<"reverse: ";

    while (curr->next!=NULL){
        curr = curr->next;
    }
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout<< endl;
}

void removeLast(Node *curr){
    if(curr->next!= NULL){
    while(curr->next->next !=NULL){
        curr = curr->next;
    }
    delete curr->next;

    curr->next= NULL;
  }else{
    cout<<"Single Node! Remove Last aborted.";
  }
}

void addFirst(Node **tmpHead, int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *tmpHead;
    newNode->prev = NULL;
    (*tmpHead)->prev = newNode;
    *tmpHead = newNode;
}


void removeFirst(Node **tmpHead){
    if((*tmpHead)->next != NULL){
    *tmpHead = (*tmpHead)->next;
    delete (*tmpHead)->prev;
    (*tmpHead)->prev = NULL;
  }else{
    cout<<"Single Node! Remove First aborted.";
  }
}

int getListSize(Node *curr){
    int size = 0;
    while(curr != NULL){
        size++;
        curr = curr->next;
    }

    return size;
}

int main() {
    Node *head = new Node;
    initDLL(head, 20);
    addLast(head, 30);
    addLast(head, 40);

    displayList(head);
    displayReverse(head);
    removeLast(head);
    displayList(head);
    displayReverse(head);

    addFirst(&head,10);
    displayList(head);
    displayReverse(head);

    removeFirst(&head);
    displayList(head);
    displayReverse(head);

    cout << "SIZE : " << getListSize(head) << endl;

    return 0;
}