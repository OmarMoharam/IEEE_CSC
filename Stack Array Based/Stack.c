#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// Function to check if the stack is empty
int isEmpty() {
   if(top == -1)
      return 1;
   else
      return 0;
}

// Function to check if the stack is full
int isFull() {
   if(top == MAX_SIZE-1)
      return 1;
   else
      return 0;
}

// Function to add an element to the top of the stack
void push(int item) {
   if(isFull()) {
      printf("Stack Overflow\n");
      return;
   }
   top++;
   stack[top] = item;
}

// Function to remove an element from the top of the stack
int pop() {
   int item;
   if(isEmpty()) {
      printf("Stack Underflow\n");
      exit(1);
   }
   item = stack[top];
   top--;
   return item;
}

// Function to display the elements of the stack
void display() {
   if(isEmpty()) {
      printf("Stack is empty\n");
      return;
   }
   printf("Stack elements are:\n");
   for(int i=top; i>=0; i--)
      printf("%d\n",stack[i]);
}

void main() {
    push(10);
    push(20);
    push(30);
    display();
    printf("Popped Element: %d\n",pop());
    display();
   
}
