#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int val){
data = val;
next = NULL;
}
};

void insert(node* &head, int val){

node* n = new node(val);
n->next = head;
head = n;
}
void insertl(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
      head = n;  
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    }
    node* rev(node* &head){
        
        node* prevptr = NULL;
        node* curptr = head;
        node* nextptr;
        while(curptr != NULL){
           nextptr = cur->next;
           cur->next = prevptr;
           prevptr = curptr;
           curptr = nextptr;
            }
            return prevptr;
        }
void display(node* head){
if(head == NULL){
return;
}
node* temp = head;
while(temp != NULL){
cout<<temp->data<<"->";
temp = temp->next;
}
cout<<endl;
}

int main(){
node* head = NULL;
insert(head, 1);
insert(head, 2);
insert(head, 3);
insert(head, 4);
insert(head, 4);
insertl(head, 7);
insertl(head, 8);
display(head);
node* newhead = rev(head);
display(newhead);

return 0;
}