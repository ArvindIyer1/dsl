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

}

int main(){

    int n ;

    cout<<"Enter the number of student details to be added :"<< endl;
    cin >> n ;
    for(int i =0 ;i<n;i++){
        
    }


    // Linkedlist l1 ;
    // Linkedlist l2 ;
    // Linkedlist l3;
    // l1.addStudent();
    // l2.addStudent();
    // l3.addStudent();
}


