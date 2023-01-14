/*
    Structure is a compound data type that contains different variables of different types. For example, you want to store Student details like student name, student roll num, student age. You have two ways to do it, one way is to create different variables for each data, but the downfall of this approach is that if you want to store the details of multiple students, in that case it is not feasible to create separate set of variables for each student.
The second and best way of doing it by creating a structure like this:

struct Student
{
    char stuName[30];
    int stuRollNo;
    int stuAge;
};
Now these three members combined will act like a separate variable and you can create structure variable like this:

structure_name variable_name
So if you want to hold the information of two students using this structure then you can do it like this:

Student s1, s2;
Then I can access the members of Student structure like this:

//Assigning name to first student
s1.stuName = "Ajeet";
//Assigning age to the second student
s2.stuAddr = 22;
Similarly I can set and get the values of other data members of the structure for every student. Lets see a complete example to put this up all together:

Structure Example in C++

*/
#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
int main(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"ENter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
   return 0;
}