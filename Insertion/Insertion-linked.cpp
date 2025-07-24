#include "iostream"
#include "stdlib.h"
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

    void TraversalLinked( Node *head){
        while (head != NULL)
        {
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<endl;
        
    }
    Node * InsetionLinkedStart(Node *head,int data){
        Node *NewNode = ( Node*)malloc(sizeof( Node));
        NewNode->data = data;
        NewNode->next = head;
        head = NewNode;
        
        return head;
    }
int main(){
        
    Node *Head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fiveth = (Node *)malloc(sizeof(Node));
    Node *sixth = (Node *)malloc(sizeof(Node));
    Node *seventh = (Node *)malloc(sizeof(Node));
    Node *eighth = (Node *)malloc(sizeof(Node));

    Head->data = 9;
    Head->next = second;

    second->data = 18;
    second->next = third;

    third->data = 27;
    third->next = fourth;

    fourth->data = 36;
    fourth->next = fiveth;

    fiveth->data = 45;
    fiveth->next = sixth;

    sixth->data = 54;
    sixth->next = seventh;

    seventh->data = 63;
    seventh->next = eighth;

    eighth->data = 72;
    eighth->next = NULL;
        
    //call traversal func..
    TraversalLinked(Head);
    cout<<endl<<"Isertion After strting.."<<endl;
    InsetionLinkedStart(Head,911);
    TraversalLinked(Head);
}