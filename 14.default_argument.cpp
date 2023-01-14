/*
 The default arguments are used when you provide no arguments or only few arguments while calling a function.
  The default arguments are used during compilation of program. F
  or example, lets say you have a user-defined function sum declared like this: int sum(int a=10, int b=20), now while calling this function you do not provide any arguments, simply called sum(); then in this case the result would be 30, compiler used the default values 10 and 20 declared in function signature. 
  If you pass only one argument like this: sum(80) then the result would be 100, using the passed argument 80 as first value and 20 taken from the default argument.

Example: Default arguments in C++
*/

#include <iostream>
using namespace std;
int sum(int a, int b=10, int c=20);

int main(){
   /* In this case a value is passed as
    * 1 and b and c values are taken from
    * default arguments.
    */
   cout<<sum(1)<<endl;

   /* In this case a value is passed as
    * 1 and b value as 2, value of c values is
    * taken from default arguments.
    */
   cout<<sum(1, 2)<<endl;

   /* In this case all the three values are
    * passed during function call, hence no
    * default arguments have been used.
    */
   cout<<sum(1, 2, 3)<<endl;
   return 0;
}
int sum(int a, int b, int c){
   int z;
   z = a+b+c;
   return z;
}

/*
    Rules of default arguments
As you have seen in the above example that I have assigned the default values for only two arguments b and c during function declaration. It is up to you to assign default values to all arguments or only selected arguments but remember the following rule while assigning default values to only some of the arguments:

If you assign default value to an argument, the subsequent arguments must have default values assigned to them, else you will get compilation error.

For example: Lets see some valid and invalid cases.
Valid: Following function declarations are valid –

int sum(int a=10, int b=20, int c=30);
int sum(int a, int b=20, int c=30);
int sum(int a, int b, int c=30);





Invalid: Following function declarations are invalid –

// Since a has default value assigned, all the
//  * arguments after a (in this case b and c) must have 
//  * default values assigned
//  
int sum(int a=10, int b, int c=30);

// Since b has default value assigned, all the
//  * arguments after b (in this case c) must have 
//  * default values assigned
//  
int sum(int a, int b=20, int c);

// /Since a has default value assigned, all the
//  * arguments after a (in this case b and c) must have 
//  * default values assigned, b has default value but
//  * c doesn't have, thats why this is also invalid
//  
int sum(int a=10, int b=20, int c);
*/