/* make three four condition
an take input from user
1. press 1 to insert item in list
2. press 2 to delete item in list
3. press 3 to traverse the list */

#include <stdlib.h>
#include <iostream>

using namespace std;

// Create a node
struct node{
  int item;
  struct node* next;
};

void insertItem(struct node** ref, int data){
  struct node* new_node = (struct node*)malloc(sizeof(struct node));

  struct node* last = *ref;

  new_node->item = data;
  new_node->next = NULL;
  if (*ref == NULL) {
  *ref = new_node;
  return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void deleteItem(struct node** ref, int key) {
  struct node* temp = *ref, *prev;

  if (temp != NULL && temp->item == key) {
    *ref = temp->next;
    free(temp);
    return;
    }
      
  // Find the key to be deleted
  while (temp != NULL && temp->item != key) {
    prev = temp;
    temp = temp->next;
    }

  // If the key is not present
  if (temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}

void traverseList(struct node* node) {
  while (node != NULL) {
    cout << node->item << " ";
    node = node->next;
  }
}

int main(){
  struct node* head = NULL; 
  int option;
  int x;
  cout<<"choose option to perform the operation"<<endl;
  cout<<"1. press 1 to insert item in list"<<endl;
  cout<<"2. press 2 to delete item in list"<<endl;
  cout<<"3. press 3 to traverse the list"<<endl;
  cin>>option;
  if(option==1){
    cout<<"enter the data:"<<endl;
    cin>>x;
    insertItem(&head, x);
  }else if(option==2){
    cout<<"enter the data to delete:"<<endl;
    cin>>x;
    deleteItem(&head, x);
  }else if(option==3){
    traverseList(head);
  }else{
    cout<<"option isn't mentioned yet! sorry"<<endl;
  }
}