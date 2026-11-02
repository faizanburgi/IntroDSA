#include <iostream>
using namespace std;

#define MAXS 20

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
        cout<<"Stack Overflow! Push aborted."<<endl;
    } else{
        ptrStack->top++;
        ptrStack->data[ptrStack->top]=n;
    }
}

void displayStack(Stack tmpStack){
    if(isEmpty(tmpStack.top)){
        cout<<"Stack is empty!"<<endl;
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
        cout<<"Stack Empty! Pop aborted."<<endl;
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
        cout<<"Stack Empty! Peek aborted."<<endl;
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

    char expr[MAXS];
    cout<<"Enter an expression: ";
    cin>>expr;
    int k = 0;
    
    while(expr[k]){
        if (expr[k] =='('){
            push(&aStack, k);
        } else if (expr[k] == ')'){
            if(isEmpty(aStack.top)){
                cout<<"Missing LEFT parenthesis."<<endl;
            }else{
            int n = pop(&aStack);
            }
        }
        
        displayStack(aStack);
        k++;
    }
    if(!isEmpty(aStack.top)){
            cout<<"Missing RIGHT parenthesis."<<endl;
        }
    displayStack(aStack); 

    
    return 0;
}