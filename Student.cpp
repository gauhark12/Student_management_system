#include <iostream> 
using namespace std;


class Student
{ 
    int n;
    string *Std_name;
    int *roll;
    string *attendance;
    int *marks;
    
    public:
    Student(){
        
        cout<<"Enter Number of Student : ";
        cin>>n;
        Std_name = new string[n];
        roll = new int[n];
        attendance = new string[n];
        marks = new int[n];

        for(int i=0;i<n;i++){
            cout<<"Enter Name : ";
            cin>>Std_name[i];
            cout<<"Enter Roll : ";
            cin>>roll[i];
            cout<<"Enter Attendance : ";
            cin>>attendance[i];
            
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<" Name : "<<Std_name[i];
           
            cout<<" Roll : "<<roll[i];
        
            cout<<" Attendance : "<<attendance[i];
            
            cout<<" Marks : "<<marks[i];
      
        }
    }
};

int main(){
    int choice;
    Student S;
    S.display();

    return 0;
}



