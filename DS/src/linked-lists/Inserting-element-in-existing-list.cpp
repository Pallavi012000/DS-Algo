// C++ program for insertion in an existing single linked 
// list at a specified position 
#include <bits/stdc++.h> 
using namespace std; 
  
// A linked list Node 
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
// Size of linked list 
int size = 0; 
  
// function to create and return a Node 
Node* getNode(int data) 
{ 
    Node* newNode = new Node(); 
  
    newNode->data = data; 
    newNode->next = NULL; 
    return newNode; 
} 
  
// function to insert a Node at required position 
void insertPos(Node** current, int pos, int data) 
{ 
   
    if (pos < 1 || pos > size + 1) 
        cout << "Invalid position!" << endl; 
    else { 
  
        // Keep looping until the pos is zero 
        while (pos--) { 
  
            if (pos == 0) { 
  
                // adding Node at required position 
                Node* temp = getNode(data);  
                temp->next = *current; 
                *current = temp; 
            } 
            else
              
              current = &(*current)->next; 
        } 
        size++; 
    } 
} 
  
// This function prints contents  
// of the linked list  
void printList(struct Node* head) 
{ 
    while (head != NULL) { 
        cout << " " << head->data; 
        head = head->next; 
    } 
    cout << endl; 
} 
  

int main() 
{ 
    // Creating the list 3->5->8->10 
    Node* head = NULL; 
    head = getNode(3); 
    head->next = getNode(5); 
    head->next->next = getNode(8); 
    head->next->next->next = getNode(10); 
  
    size = 4; 
  
    cout << "Linked list before insertion: "; 
    printList(head); 
  
    int data = 12, pos = 3; 
    insertPos(&head, pos, data); 
    cout << "Linked list after insertion of 12 at position 3: "; 
    printList(head); 
  
    return 0; 
} 
