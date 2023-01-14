/*Constructor is a special member function of a class that initializes the object of the class. Constructor name is same as class name and it doesn’t have a return type. Lets take a simple example to understand the working of constructor.

Simple Example: How to use constructor in C++
Read the comments in the following program to understand each part of the program.
*/

#include <iostream>
using namespace std;
class constructorDemo{
public:
   int num;
   char ch;
   /* This is a default constructor of the
    * class, do note that it's name is same as
    * class name and it doesn't have return type.
    */
   constructorDemo() {
      num = 100; ch = 'A';
   }
};
int main(){
   /* This is how we create the object of class,
    * I have given the object name as obj, you can
    * give any name, just remember the syntax:
    * class_name object_name;
    */
   constructorDemo obj;

   /* This is how we access data members using object
    * we are just checking that the value we have
    * initialized in constructor are reflecting or not.
    */
   cout<<"num: "<<obj.num<<endl;
   cout<<"ch: "<<obj.ch;
   return 0;
}

/*vConstructor vs Member function
Now that we know what is constructor, lets discuss how a constructor is different from member function of the class.
1) Constructor doesn’t have a return type. Member function has a return type.
2) Constructor is automatically called when we create the object of the class. Member function needs to be called explicitly using object of class.
3) When we do not create any constructor in our class, C++ compiler generates a default constructor and insert it into our code. The same does not apply to member functions.
This is how a compiler generated default constructor looks:

class XYZ
{ 
    ....
    XYZ()
    {
        //Empty no code
    }
};
Types of Constructor in C++
There are two types of constructor in C++. 1) Default constructor 2) Parameterized constructor

*/

// 1) Default Constructor
// A default constructor doesn’t have any arguments (or parameters)
#include <iostream>
using namespace std;
class Website{
public:
   //Default constructor
   Website() {
      cout<<"Welcome to BeginnersBook"<<endl;
   }
};
int main(void){
   /*creating two objects of class Website.
    * This means that the default constructor
    * should have been invoked twice.
    */
   Website obj1;
   Website obj2;
   return 0;
}
// When you don’t specify any constructor in the class, a default constructor with no code (empty body) would be inserted into your code by compiler.

/*2) Parameterized Constructor
Constructors with parameters are known as Parameterized constructors. These type of constructor allows us to pass arguments while object creation. Lets see how they look:

Lets say class name is XYZ
Default constructor:

XYZ() {

}
....
XYZ obj;
....
Parameterized Constructor:

XYZ(int a, int b) {

}
...
XYZ obj(10, 20);*/

//Example:
#include <iostream>
using namespace std;
class Add{
public:
   //Parameterized constructor
   Add(int num1, int num2) {
     cout<<(num1+num2)<<endl;
   }
};
int main(void){
   /* One way of creating object. Also
    * known as implicit call to the
    * constructor
    */
   Add obj1(10, 20);
   /* Another way of creating object. This
    * is known as explicit calling the
    * constructor.
    */
   Add obj2 = Add(50, 60);
   return 0;
}