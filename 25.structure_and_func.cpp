/*
    How to pass structure as an argument to function
Here we have a function printStudentInfo() which takes structure Student as an argument and prints the details of student using structure varaible. The important point to note here is that you should always declare the structure before function declarations, otherwise you will get compilation error.


*/
#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
void printStudentInfo(Student);
int main(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"Enter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   printStudentInfo(s);
   return 0;
}
void printStudentInfo(Student s){
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
}

/*
How to return the Structure from a Function
In this example we have two functions one gets the values from user, assign them to structure members and returns the structure and the other function takes that structure as argument and print the details.*/
#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
Student getStudentInfo();
void printStudentInfo(Student);
int main(){
   Student s;
   s = getStudentInfo();
   printStudentInfo(s);
   return 0;
}
/* This function prompt the user to input student
 * details, stores them in structure members
 * and returns the structure
 */
Student getStudentInfo(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"Enter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   return s;
}
void printStudentInfo(Student s){
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
}