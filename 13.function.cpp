/*
    A function is block of code which is used to perform a particular task, for example let’s say you are writing a large C++ program and in that program you want to do a particular task several number of times, like displaying value from 1 to 10, in order to do that you have to write few lines of code and you need to repeat these lines every time you display values. Another way of doing this is that you write these lines inside a function and call that function every time you want to display values. This would make you code simple, readable and reusable.

Syntax of Function
return_type function_name (parameter_list)
{
   //C++ Statements
}
Let’s take a simple example to understand this concept.
*/
// A simple function example

#include <iostream>
using namespace std;
/* This function adds two integer values
 * and returns the result
 */int
sum(int num1, int num2){
   int num3 = num1+num2; return num3;
}

int main(){
   //Calling the function
   cout<<sum(1,99);
   return 0;
}

// The same program can be written like this: Well, I am writing this program to let you understand an important term regarding functions, which is function declaration. Lets see the program first and then at the end of it we will discuss function declaration, definition and calling of function.

#include <iostream>
using namespace std;
//Function declaration
int sum(int,int);

//Main function
int main(){
   //Calling the function
   cout<<sum(1,99);
   return 0;
}
/* Function is defined after the main method 
 */
int sum(int num1, int num2){
   int num3 = num1+num2;
   return num3;
}

/*
    Function Declaration: You have seen that I have written the same program in two ways, in the first program I didn’t have any function declaration and in the second program I have function declaration at the beginning of the program. The thing is that when you define the function before the main() function in your program then you don’t need to do function declaration but if you are writing your function after the main() function like we did in the second program then you need to declare the function first, else you will get compilation error.

syntax of function declaration:

return_type function_name(parameter_list);
Note: While providing parameter_list you can avoid the parameter names, just like I did in the above example. I have given int sum(int,int); instead of int sum(int num1,int num2);.

Function definition: Writing the full body of function is known as defining a function.
syntax of function definition:

return_type function_name(parameter_list) {
    //Statements inside function
}
Calling function: We can call the function like this:

function_name(parameters);
*/

/*
    Types of function
We have two types of function in C++:

1) Built-in functions
2) User-defined functions

1) Built-in functions
Built-in functions are also known as library functions. We need not to declare and define these functions as they are already written in the C++ libraries such as iostream, cmath etc. We can directly call them when we need.

Example: C++ built-in function example
Here we are using built-in function pow(x,y) which is x to the power y. This function is declared in cmath header file so we have included the file in our program using #include directive.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    /* Calling the built-in function 
     * pow(x, y) which is x to the power y
     * We are directly calling this function
     */
    cout<<pow(2,5);
    return 0;
}

/*
    2) User-defined functions
C++ functions
We have already seen user-defined functions, the example we have given at the beginning of this tutorial is an example of user-defined function. The functions that we declare and write in our programs are user-defined functions. Lets see another example of user-defined functions.

User-defined functions
*/

#include <iostream>
#include <cmath>
using namespace std;
//Declaring the function sum
int sum(int,int);

int main(){
   int x, y;
   cout<<"enter first number: ";
   cin>> x;

   cout<<"enter second number: ";
   cin>>y;

   cout<<"Sum of these two :"<<sum(x,y);
   return 0;
}
//Defining the function sum
int sum(int a, int b) {
   int c = a+b;
   return c;
}