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
    void searchStudent(int roll);
    void deleteStudentinfo(int roll)
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
    if(head == NULL){
        cout<<"the list is empty :"<<endl;
        return ;
    }
    Node *temp = head ;
    int num = 0;
    while(temp != NULL){
        cout<<"Student Name :\n"<<temp -> studentName << "" ;
        cout << "Student marks :\n "<<temp -> marks << "" ;
        cout<< "Roll NO \n : "<<temp -> roll_no << "  "<<endl;
        temp =temp -> next ;
        num = num + 1;
    }
    cout<<"Number of nodes is :"<<num<<endl;

}

void Linkedlist::searchStudent(int roll){
    Node *temp = head;
    while(temp!=NULL){
        if(temp->roll_no == roll){
            cout<<"\nStudent Found \n:";
            cout << "Roll No: " << temp->roll_no
                 << " Marks: " << temp->marks
                 << " Name: " << temp->studentName << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "\nStudent with Roll No " << roll << " not found.\n";
}

// void Linkedlist::deleteStudentinfo(int roll){
//     if(head == NULL){
//         cout<<"Element not found , cannot be deleted :"<<endl;
//         return ;
//     }
//     Node *temp = head;
//     Node *prev = NULL;
// }

void Linkedlist::deleteStudentinfo(int roll){
    if(head == NULL){
        cout<<"List is empty ";<<endl ;
        return;
    }
    Node *temp = head ;
    Node *prev = NULL ;
    if(temp != NULL && temp->roll_no == roll){
        head = temp->next;
        delete temp;
        cout<<"Deleted the info from :"<<roll << endl;
        return ;
    }
    while (temp != NULL && temp->roll_no != roll) {
        prev = temp;
        temp = temp->next;
    }
    while (temp != NULL && temp->roll_no != roll) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
    cout << "Student with Roll No " << roll << " deleted.\n";
}
int main(){
 
  
    Linkedlist l1 ;

    while(true){
        cout << " 1 : Add Student " ;
        cout<< "  2 : Display " ;
        cout <<  " 3 : Search " ;
        cout<<   " 4 : Exit \n";
        cout<<"Enter the operation choice to be performed :";

        int choice ;
        cin>>choice ;
        if(choice == 1){
            l1.addStudent();
        }
        else if(choice == 2){
            l1.display();
        }
        else if(choice == 3){
            int roll;
            cout<<"Enter the roll no to be searched :";
            cin>>roll;
            l1.searchStudent(roll);
        }
        else if (choice == 4){
             break;
        }
        else {
            cout<<"Please enter a correct choice :";
        }
    }

}


