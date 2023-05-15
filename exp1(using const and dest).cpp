// For Student
#include<iostream>
using namespace std;
class student{
    char name[10],mail[10],dob[10];
    int roll; 
    public:
  student();
  void course();
  void display();
  
  ~student(){   
    cout<<"Destructor executed in student class "<<endl;
  };
};

void student::display(){
    cout<<"-------------Entered details: -------------"<<endl;
    cout<<"Student name: "<<name<<endl;
    cout<<"Student roll: "<<roll<<endl;
    cout<<"Student Email: "<<mail<<endl;
    cout<<"Student dob: "<<dob<<endl;
  };
     
student::student(){
    cout<<"Enter  name: "<<endl;
    cin>>name;
    cout<<"Enter roll no.: "<<endl;
    cin>>roll;
    cout<<"Enter Email: "<<endl;
    cin>>mail;
    cout<<"Enter dob: "<<endl;
    cin>>dob;
};
int main(){
    student s;
    s.display();
}

// For Course
#include<iostream>
using namespace std;
class course{
  public:
  char branch[10],c_name[10];
  int sem;
  int courseId;
  course();
  void display(){
    cout<<"-*****COURSE*******"<<endl;
        cout<<"Student Sem: "<<sem<<endl;
        cout<<"Student Branch: "<<branch<<endl;
        cout<<"Student Course Name: "<<c_name<<endl;
        cout<<"Student Course id: "<<courseId<<endl;
  };
  ~course(){
    cout<<"Destructor executed in course class"<<endl;
  };
};
 course::course(){
       cout<<"SEM ";
        cin>>sem;
        cout<<"Branch: ";
        cin>>branch;
        cout<<"CourseName: ";
        cin>>c_name;
        cout<<"Enter the course id: ";
        cin>>courseId;
}
int main(){
    course c;
    c.display();
}
