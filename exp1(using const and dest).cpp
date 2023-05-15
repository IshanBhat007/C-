#include<iostream>
using namespace std;
class student{
    char stdname[10],gmail[10],dob[10],add[10];
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
    cout<<"Student name: "<<stdname<<endl;
    cout<<"Student roll: "<<roll<<endl;
    cout<<"Student Email: "<<roll<<endl;
    cout<<"Student dob: "<<dob<<endl;
    cout<<"Student adress: "<<add<<endl;
  };
     
student::student(){
    cout<<"Enter student name: "<<endl;
    cin>>stdname;
    cout<<"Enter student roll no.: "<<endl;
    cin>>roll;
    cout<<"Enter student Email: "<<endl;
    cin>>gmail;
    cout<<"Enter student dob: "<<endl;
    cin>>dob;
    cout<<"Enter student address: "<<endl;
    cin>>add;
};
int main(){
    student s;
    s.display();
}


//To create a Course class using Constructor and Destructor.
#include<iostream>
using namespace std;
class course{
  public:
  char branch[10],courseName[10];
  int sem,courseId,courseCredit;
  course();
  void display(){
    cout<<"----------Entered course details: -------------"<<endl;
        cout<<"Student Sem: "<<sem<<endl;
        cout<<"Student Branch: "<<branch<<endl;
        cout<<"Student Course Name: "<<courseName<<endl;
        cout<<"Student Course id: "<<courseId<<endl;
        cout<<" Course Credit: "<<courseCredit<<endl;
  };
  ~course(){
    cout<<"Destructor executed in course class"<<endl;
  };
};
 course::course(){
       cout<<"Enter the student Sem: ";
        cin>>sem;
         cout<<"Enter the student Branch: ";
        cin>>branch;
        cout<<"Enter the courseName: ";
        cin>>courseName;
         cout<<"Enter the course id: ";
        cin>>courseId;
         cout<<"Enter the course credit: ";
        cin>>courseCredit;
}
int main(){
    course c;
    c.display();
}
