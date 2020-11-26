#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next_node;
}

//-------

/* Given a reference (pointer to pointer) 
to the head of a list and an int, inserts 
a new node on the front of the list. */

void insert_begin(node** head, int data)
{  
    node *new_node = new node();
    new_node->data = data;
    new_node->next_node = (*head);
    (*head) = new_node;

    return;
}

//---------

/* Given a node prev_node, insert a new node after the given  
prev_node */

void insert_n(node* prev_node, int data)
{
    if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    } 
    
    node *new_node = new node();
    new_node->data = data;
    new_node->next_node = prev_node->next;
    prev_node->next_node = new_node;

    return;
}

// -----------

/* Given a reference (pointer to pointer) to the head  
of a list and an int, appends a new node at the end */

void append (node** head, int data)
{
    node* new_node = new node();
    new_node->next = NULL;
    new_node->data = data;

    node *temp = *head;
    
    if(*head==NULL)
    {
       *head = new_node;
       return;
    }

    while( temp!=NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    return;
}

//---------

/* This function prints contents of 
   linked list starting from head */

   void print(node* node, int data)
   {
       while( node!=NULL)
       {
           cout<<node->data<<" ";
           node = node->next;
       }

       return;
   }

//--------------

int main()
{
    /* Start with the empty list */
    Node* head = NULL;  
      
    // Insert 6. So linked list becomes 6->NULL  
    append(&head, 6);  
      
    // Insert 7 at the beginning.  
    // So linked list becomes 7->6->NULL  
    insert_begin(&head, 7);  
      
    // Insert 1 at the beginning.  
    // So linked list becomes 1->7->6->NULL  
    insert_begin(&head, 1);  
      
    // Insert 4 at the end. So  
    // linked list becomes 1->7->6->4->NULL  
    append(&head, 4);  
      
    // Insert 8, after 7. So linked  
    // list becomes 1->7->8->6->4->NULL  
    insert_n(head->next, 8);  
      
    cout<<"Created Linked list is: ";  
    print(head);  
      
    return 0;
}