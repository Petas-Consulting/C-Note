/*
Enum is a user defined data type where we specify a set of values for a variable and the variable can only take one out of a small set of possible values. We use enum keyword to define a Enumeration.

enum direction {East, West, North, South}dir;
Here Enumeration name is direction which can only take one of the four specified values, the dir at the end of the declaration is an enum variable.

Lets take a simple example to understand this:
Here I have assigned the value West to the enum variable dir and when I displayed the value of dir it shows 1. This is because by default the values are in increasing order starting from 0, which means East is 0, West is 1, North is 2 and South is 3.

Simple enum Example */
#include<iostream>
using namespace std;
enum direction {East, West, North, South}dir;
int main()
{
   dir = West;
   cout<<dir;
   return 0;
}

//Another way to declare enum variable
// As we have seen in the above example that I have declared the enum variable dir during enum declaration, there is another way to declare an enum variable.

#include <iostream>
using namespace std;
enum direction {East, West, North, South};
int main(){
   direction dir;
   dir = South; 
   cout<<dir;   
   return 0;
}

/*
Why use enum in C++
Now that we understand what is enum and how to use them in program, lets discuss why we use them:
Enums are used only when we expect the variable to have one of the possible set of values, for example, we have a dir variable that holds the direction. Since we have four directions, this variable can take any one of the four values, if we try to assign a another random value to this variable, it will throw a compilation error. This increases compile-time checking and avoid errors that occurs by passing in invalid constants.

Another important place where they are used frequently are switch case statements, where all the values that case blocks expect can be defined in an enum. This way we can ensure that the enum variable that we pass in switch parenthesis is not taking any random value that it shouldn’t accept.

How to change default values of Enum
*/
#include <iostream>
using namespace std;
enum direction {East=11, West=22, North=33, South=44};
int main(){
   direction dir;
   dir = South;
   cout<<dir; 
   return 0;
}