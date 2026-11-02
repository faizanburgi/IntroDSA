#include <iostream>
using namespace std;

#define MAXS 5

struct Stack {
    int top;
    int data[MAXS];
};

bool isFull(int tmpTop){
    return tmpTop == MAXS-1;
}

bool isEmpty(int tmpTop){
    return tmpTop == -1;
}


void push(Stack *ptrStack,int n){
    if(isFull(ptrStack->top)){
        cout<<"Stack Overflow"<<endl;
    } else{
        ptrStack->top++;
        ptrStack->data[ptrStack->top]=n;
    }
}

void displayStack(Stack tmpStack){
    if(isEmpty(tmpStack.top)){
        cout<<"Stack is empty"<<endl;
    }
    else{
    for(int i = 0; i<=tmpStack.top; i++){
        cout<<tmpStack.data[i]<<" ";
    }
    cout<< "TOP" <<endl;
    }
}

int pop(Stack *ptrStack){
    int data = -1;
    if(isEmpty(ptrStack->top)){
        cout<<"Stack Empty"<<endl;
    } 
    else{
        data = ptrStack->data[ptrStack->top];
        ptrStack->top--;
    }
    return data;
}

int peek(Stack tmpStack){
    int data = -2;
    if(isEmpty(tmpStack.top)){
        cout<<"Stack Empty"<<endl;
    } 
    else{
        data = tmpStack.data[tmpStack.top];
    }
    return data;
} 

int getStackSize(Stack tmpStack) {
    return tmpStack.top + 1;
}

int main(){
    Stack aStack;
    aStack.top = -1;
    push(&aStack, 11);
    push(&aStack, 22);
    push(&aStack, 33);
    displayStack(aStack);

    cout<<"Pop: "<<pop(&aStack)<<endl;
    displayStack(aStack);
    cout<<"Peek: "<<peek(aStack)<<endl;
    displayStack(aStack);
    cout<<"Stack Size: "<<getStackSize(aStack)<<endl;

    return 0;
}