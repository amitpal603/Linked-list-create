#include "iostream"
#include "stdlib.h"
using namespace std;


struct Node
{
    int data;
    struct Node * next;
};

typedef struct Node Node;

Node *Travarsal(Node *head){
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
    
}

Node * DeletionAtFirst(Node *head){
        Node *p = head;
        head = head->next;
        delete(p);
        return head;
      
}

int main(){
    Node * Head = (Node *)malloc(sizeof(Node));
    Node * sec = (Node *)malloc(sizeof(Node));
    Node *third = (Node*)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fiveth = (Node *)malloc(sizeof(Node));
    Node *six = (Node *)malloc(sizeof(Node));

    Head->data = 9;
    Head->next = sec;

    sec->data = 8;
    sec->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = fiveth;

    fiveth->data = 5;
    fiveth->next = six;

    six->data = 4;
    six->next = NULL;

    cout<<"Before deletion of node.."<<endl;
    Travarsal(Head);
    cout<<endl<<"After Deletion the node.."<<"  ";
   Head =   DeletionAtFirst(Head);
    Travarsal(Head);

}