#include <iostream>
using namespace std;

class Node{
    public:
        int data ;
        Node* next;
        Node(int val){
            data = val;
            next =NULL;
        }
};
class linkedList{
    Node* head;
    Node* tail;
    public:
    linkedList(){
        head=tail=NULL;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
        }else{
            tail->next =newNode;
            tail= newNode;
        }
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head== NULL){
            head= tail= newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void printLinkedList(){
        if (head == NULL ){
            cout<<"empty linked list"<< endl;
            return;
        }
        Node* temp = head;
        while (temp!= NULL){
            cout<< temp-> data <<"->";
            temp= temp->next;
        }
        cout << NULL<< endl;
    }
    void pop_back(){
        if (head== NULL){
            cout<<"already empty";
            return;
        }else if(head==tail) {
            delete head;
            head= tail= NULL;
        }else{
            Node* temp = head;
            while (temp->next->next!=NULL){
                temp= temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail=temp;
        }
    }
    void pop_front(){
        if (head == NULL) cout << "empty linkedlist"<<endl;
        else if(head = tail) {
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head->next;
            delete head;
            head = temp;
        }
    }
    bool isempty(){
        if (head==NULL) return true;
        else return false;
    }
    
};


