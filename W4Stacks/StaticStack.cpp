#include <iostream>
using namespace std;

#define MAXS 5

struct Stack {
    int top;
    int data[MAXS];
};

void push(Stack *ptrStack,int n){
    ptrStack->top++;
    ptrStack->data[ptrStack->top]=n;

}

void displayStack(Stack tmpStack){
    for(int i = 0; i<=tmpStack.top; i++){
        cout<<tmpStack.data[i]<<" ";
    }
    cout<<"TOP"<<endl;
}

int main(){
    Stack aStack;
    aStack.top = -1;
    push(&aStack, 11);
    push(&aStack, 22);
    push(&aStack, 33);
    push(&aStack, 44);
    push(&aStack, 55);
    push(&aStack, 66);

    displayStack(aStack);

}