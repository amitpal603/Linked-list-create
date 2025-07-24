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
   Node * InsertionAtBetween(Node * head,int data,int index){
        Node *newNode = (Node*)malloc(sizeof(Node));
        Node *p = head;
        newNode->data = data;

        int i = 0;
        while (i != index-1)
        {
            p = p->next;
            i++;
        }
        newNode->next = p->next;
         p->next = newNode;
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
    cout<<endl<<"Isertion After Between.."<<endl;
    InsertionAtBetween(Head,99,3);
    TraversalLinked(Head);
}