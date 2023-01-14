/*
    Object oriented programming is a way of solving complex problems by breaking them into smaller problems using objects. Before Object Oriented Programming (commonly referred as OOP), programs were written in procedural language, they were nothing but a long list of instructions. On the other hand, the OOP is all about creating objects that can interact with each other, this makes it easier to develop programs in OOP as we can understand the relationship between them.

Object Oriented Programming(OOP)
In Object oriented programming we write programs using classes and objects utilising features of OOPs such as abstraction, encapsulation, inheritance and polymorphism

Class and Objects
A class is like a blueprint of data member and functions and object is an instance of class. For example, lets say we have a class Car which has data members (variables) such as speed, weight, price and functions such as gearChange(), slowDown(), brake() etc. Now lets say I create a object of this class named FordFigo which uses these data members and functions and give them its own values. Similarly we can create as many objects as we want using the blueprint(class).
*/


//Class name is Car
// class Car
// {
//     //Data members
//     char name[20];
//     int speed;
//     int weight;
 
// public:
//     //Functions
//     void brake(){
//     }
//     void slowDown(){
//     }
// };
 
// int main()
// {
//    //ford is an object
//    Car ford; 
// }


/*Abstraction
Abstraction is a process of hiding irrelevant details from user. For example, When you send an sms you just type the message, select the contact and click send, the phone shows you that the message has been sent, what actually happens in background when you click send is hidden from you as it is not relevant to you.

Encapsulation
Encapsulation is a process of combining data and function into a single unit like capsule. This is to avoid the access of private data members from outside the class. To achieve encapsulation, we make all data members of class private and create public functions, using them we can get the values from these data members or set the value to these data members.

Inheritance
Inheritance is a feature using which an object of child class acquires the properties of parent class.

*/

#include <iostream>
using namespace std;
class ParentClass {
  //data member
  public:
    int var1 =100;
};
class ChildClass: public ParentClass {
  public:
  int var2 = 500;
};
int main(void) {
  ChildClass obj;
}

/*
Now this object obj can use the properties (such as variable var1) of ParentClass.

Polymorphism
Function overloading and Operator overloading are examples of polymorphism. Polymorphism is a feature using which an object behaves differently in different situation.
In function overloading we can have more than one function with same name but different numbers, type or sequence of arguments.

Polymorphism Example*/

#include <iostream>
using namespace std;
class Sum {
  public:
    int add(int num1,int num2){
      return num1 + num2;
    }
    int add(int num1, int num2, int num3){
      return num1 + num2 + num3;
    }
};
int main(void) {
   //Object of class Sum
   Sum obj;

   //This will call the second add function
   cout<<obj.add(10, 20, 30)<<endl;

   //This will call the first add function
   cout<<obj.add(11, 22);
   return 0;
}