#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor for making new node when it call
    Node(int d){
        this-> data = d;
        this-> next = NULL;
    }

    // Distructor for deleting any node when it call
    ~Node(){
        int value = this -> data;
        if(this-> next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout<< " Deleted node is : "<< value;
        cout<< endl;
    } 
};

void Insertathead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void Insertattail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail -> next = temp;
    tail = temp;
}

void Insteratposition(Node* & head, Node* &tail, int d, int pos){
    //If data has to insert at top 
    if(pos == 1){
        Insertathead(head, d);
        return;
    }
    Node* temp= head;
    int cnt= 1;
    while (cnt < pos-1){
        temp = temp -> next;
        cnt++; 
    }
    // If data has to insert at tail
    if(temp-> next == NULL){
        Insertattail(tail, d);
        return ;
    }
    // If data has to insert inside any where in Linked list
    Node* nodetoinsert= new Node(d);
    nodetoinsert-> next = temp->next;
    temp-> next = nodetoinsert;
    
}

void deleteatpositon(Node* &head, int pos){
    // If position is First to delete the  node
    if(pos == 1){
        Node* temp= head;
        head = head -> next;
        temp-> next = NULL;
        delete temp;
    }
    // Position is either than first to delete
    else{
        Node* curr= head; 
        Node* prev= NULL;
        int cnt =1;
        while(cnt < pos){
            prev = curr;
            curr = curr -> next;
            cnt ++;
        }
        prev -> next = curr-> next;
        curr -> next= NULL;
        delete curr;
    }
}

void Print (Node* &head)        // Print Function 
{
    Node* temp= head;
    while(temp != NULL)
    {
        cout<< temp-> data<<endl;
        temp = temp-> next;
    }
}

int main(){
    Node* node1= new Node(9);        // object Pointer
    //cout<< node1 -> data  << endl;
    //cout<< node1 -> next << endl;
    
    Node* head = node1;
    Node* tail= node1;

    //Print(head);
    Insertathead(head , 6);
    Insertathead(head , 5);
    Insertathead(head , 4);
    Insertathead(head , 3);
    Insertattail(tail, 10);
    Insertattail(tail, 11);
    Insertattail(tail, 12);
    Insteratposition(head, tail, 7, 5);
    Insteratposition(head, tail, 8, 6);
    Print(head);
    deleteatpositon(head, 3);
    Print(head);
    deleteatpositon(head, 1);
    Print(head);
    return 0;
}