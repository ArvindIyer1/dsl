#include <bits/stdc++.h>
using namespace std;
struct Node {
    int roll_no;
    float marks;
    string studentName;
    Node *next ;
};

class Linkedlist {
    Node *head ;
    public :
    Linkedlist();
    void addStudent();
    void display() ;
};

Linkedlist :: Linkedlist(){
    head = NULL ;

}

void Linkedlist :: addStudent( ){
    Node *newNode = new Node ;
    Node *temp ;
    cout << " Enter the Roll Number of the student :"<<endl;
    cin >> newNode -> roll_no;
    cout<<" Enter the marks of the respective the student :"<< endl;
    cin >> newNode -> marks;
    cout<<"Enter the Name of the student :" << endl;
    cin >> newNode -> studentName;
    newNode -> next = NULL ;
    if(head == NULL){
        head = newNode;
    }else {
       temp = head ;
       while (temp -> next != NULL){
        temp = temp -> next ;
       }
       temp -> next = newNode;

    }

}

void Linkedlist :: display(){
    // if(head == NULL){
    //     cout<<"LIST IS EMPTY"<<endl;
    // }else{
    //     Node *temp1 = head ;
    //     while(temp1 -> next != NULL){
    //         cout<<roll_no<<endl;
    //         cout << marks ;
    //         cout << studentName;
    //         temp1 = temp1 -> next;
    //     }
    //     temp1 -> next = 
    // }
    int num = 0;
    Node *newNode = head;
    while(newNode != NULL){
        cout<<newNode -> studentName << "" ;
        cout << newNode -> marks << "" ;
        cout<< newNode -> roll_no << "  ";
       newNode =newNode -> next ;
        num = num + 1;
    }
    cout<<"Number of nodes is :"<<num<<endl;

}

int main(){
 
  
    Linkedlist l1 ;

    l1.addStudent();
    l1.addStudent();
    l1.addStudent();
    l1.display();
    // l1.display();
    // l1.display();
}


