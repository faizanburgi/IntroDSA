#include <iostream>
using namespace std;

struct Student{
    int id;
    Student *next;
};


void addLast(Student *curr, int n){
    Student *newStudent = new Student;
    newStudent->id = n;
    newStudent->next = NULL;

    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newStudent;
}

void addFirst(Student **tmpHead, int n){
    Student *newStudent = new Student;
    newStudent->id = n;
    newStudent->next = *tmpHead;

    *tmpHead = newStudent;
}

void Display1(Student *curr){
    while(curr!= NULL){
        cout << curr->id << " ";
        curr = curr->next;
    }
    cout<< endl;
}

int main(){
    Student *head = new Student;
    head->id = 02;
    head->next = NULL;

    addLast(head, 03);
    addLast(head, 04);
    addLast(head, 05);
    addLast(head, 06);
    Display1(head);

    addFirst(&head, 01);
    Display1(head);
    return 0;
}