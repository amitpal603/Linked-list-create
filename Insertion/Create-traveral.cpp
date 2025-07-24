#include "iostream"
#include "stdlib.h"
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

    void TraversalLinked(struct Node *head){
        while (head != NULL)
        {
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<endl;
        
    }
int main(){
        
    Node *Head = (struct Node *)malloc(sizeof(struct Node));
    Node *second = (struct Node *)malloc(sizeof(struct Node));
    Node *third = (struct Node *)malloc(sizeof(struct Node));
    Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    Node *fiveth = (struct Node *)malloc(sizeof(struct Node));
    Node *sixth = (struct Node *)malloc(sizeof(struct Node));
    Node *seventh = (struct Node *)malloc(sizeof(struct Node));
    Node *eighth = (struct Node *)malloc(sizeof(struct Node));

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
}