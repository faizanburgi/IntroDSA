#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

bool isEmpty(Node *tmpFront){
    return tmpFront == NULL;
}

void enqueue(Node **tmpFront, int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    if(isEmpty(*tmpFront)){
        *tmpFront = newNode;
    }else{
        Node *curr = *tmpFront;
        while(curr->next !=NULL){
            curr = curr ->next;
        }
        curr->next = newNode;
    }
}

void displayQueue(Node *curr){
    if(isEmpty(curr)){
        cout<<"Queue is empty!"<<endl;
    }else{
        cout<<"FRONT ";
        while (curr!=NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
}

int dequeue(Node **tmpFront){
    int data = -1;
    if(isEmpty(*tmpFront)){
        cout<<"Queue is empty! Dequeue aborted."<<endl;
    }else{
        Node *oldNode = *tmpFront;
        *tmpFront = (*tmpFront)->next;
        data = oldNode->data;
        delete oldNode;
    }
    return data;
}

int getQueueSize(Node *curr){
    int size = 0;
    while(curr!=NULL){
        size++;
        curr=curr->next;
    }
    return size;
}

int peek(Node *tmpFront){
    int data = -2;
    if(isEmpty(tmpFront)){
        cout<<"Queue is empty! Peek aborted."<<endl;
    }else{
        return tmpFront->data;
    }
}

int main(){
    Node *front = NULL;
    enqueue(&front, 22);
    enqueue(&front, 33);
    enqueue(&front, 44);
    displayQueue(front);

    cout<<"Dequeued: "<<dequeue(&front)<<endl;
    displayQueue(front);
    cout<<"Queue size: "<<getQueueSize(front)<<endl;
    cout<<"Peek: "<<peek(front)<<endl;
    return 0;   

}