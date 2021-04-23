#include<iostream>
#include<string>
using namespace std;

struct Node{
    string data;
    Node *next;
};

void addToList(Node *head);
void deleteFromList(Node *head);
void printList(Node *head);

int main(){
    bool quit = false;
    int choice;
    Node *head = new Node;
    head->next = NULL;

    while (!quit){
        cout << "1. add to list" << endl
            << "2. delete from list" << endl
            << "3. print list" << endl
            << "4. quit" << endl;
        cin >> choice;
        switch(choice){
        case 1: addToList(head);
            break;
        case 2: deleteFromList(head);
            break;
        case 3: printList(head);
            break;
        case 4: quit = true;
            break;
        default:
            cout << "That is not a valid input, quitting program";
            quit = true;
        }
    }
}

void addToList(Node *head){
    bool quit = false;
    string temp;
    Node *current = new Node;
    current->next = NULL;

    while (!quit){

        cout << "Enter a word(quit) to stop";
        cin >> temp;

        if (temp == "quit"){
            quit = true;
        }
        else{
            current->data = temp;
            current -> next = current;
        }
    }
    return;
}

void deleteFromList(Node *head){
    string deletion;
    cout << "Which value do you want to delete from the list? ";
    cin >> deletion;

    Node *prev = head;
    Node *current = head->next;

    while (current)
    {
        if (current->data == deletion){
            prev->next = current->next;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
    if (!current){
        cout << "That value is not in the list" << endl;
    }
}

void printList(Node *head){
    if (!head)
    {
        cout << "Nothing is in the list." << endl;
        return;
    }

    Node *current = new Node;
    current->next = head;
    while (current)  
    {
        cout << current->data << endl; 
        current = current->next;  
    }
}