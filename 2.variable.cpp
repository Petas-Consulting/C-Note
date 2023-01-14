/* A variable is a name which is associated with a value that can be changed. For example when I write int num=20; here variable name is num which is associated with value 20, int is a data type that represents that this variable can hold integer values. We will cover the data types in the next tutorial. In this tutorial, we will discuss about variables.

    Syntax of declaring a variable in C++
data_type variable1_name = value1, variable2_name = value2;

    Example
*/
int num1=20, num2=100;

/*
        Types of variables
Variables can be categorised based on their data type. For example, in the above example we have seen integer types variables. Following are the types of variables available in C++.

int: These type of of variables holds integer value.

char: holds character value like ‘c’, ‘F’, ‘B’, ‘p’, ‘q’ etc.

bool: holds boolean value true or false.

double: double-precision floating point value.

float: Single-precision floating point value.

*/

/*
        Types of variables based on their scope

Before going further lets discuss what is scope first. When we discussed the Hello World Program, we have seen the curly braces in the program like this:

int main {

//Some code

}
Any variable declared inside these curly braces have scope limited within these curly braces, if you declare a variable in main() function and try to use that variable outside main() function then you will get compilation error.

    Lets move on to the types of variables based on the scope.

1. Global variable
2. Local variable

Global variable: A variable declared outside any function is called global variable. Global variables are accessible from anywhere in the program. For example:

        */
#include <iostream>
using namespace std;
// This is a global variable
char myVar = 'A';
int main()
{
   cout <<"Value of myVar: "<< myVar<<endl;
   myVar='Z';
   cout <<"Value of myVar: "<< myVar;
   return 0;
}
/*
        Local variable: A variable declared inside a function is called local variable. Local variables are accessible only from within the function. For example:

        */
//int main() {
    //int num1=20, num2=100;
    //return 0;
//}
/*
        */