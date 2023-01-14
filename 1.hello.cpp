/*
* Multiple line
* comment
*/
#include<iostream>

//Single line comment
using namespace std;

//This is where the execution of program begins
int main()
{
   // displays Hello World! on screen
   cout<<"Hello World!";

   return 0;
}

/*Let’s discuss each and every part of the above program
 
 1. Comments – You can see two types of comments in the above program

// This is a single line comment
/* This is a multiple line comment
* suitable for long comments

Comments as the names suggests are just a text written by programmer during code development. 
Comment doesn't affect your program logic in any way, 
you can write whatever you want in comments but it should be related to the code and have some meaning so that when someone else look into your code, the person should understand what you did in the code by just reading your comment.

2. #include<iostream> – This statements tells the compiler to include iostream file. 
This file contains pre defined input/output functions that we can use in our program.

3. using namespace std; – A namespace is like a region, where we have functions, variables etc and their scope is limited to that particular region. 
Here std is a namespace name, this tells the compiler to look into that particular region for all the variables, functions, etc. 
I will not discuss this in detail here as it may confuse you.

4. int main() – As the name suggests this is the main function of our program and the execution of program begins with this function, the int here is the return type which indicates to the compiler that this function will return a integer value. 
That is the main reason we have a return 0 statement at the end of main function.

5. cout << “Hello World!”; – The cout object belongs to the iostream file and the purpose of this object is to display the content between double quotes as it is on the screen. 
This object can also display the value of variables on screen(don’t worry, we will see that in the coming tutorials).

6. return 0; – This statement returns value 0 from the main() function which indicates that the execution of main function is successful. 
The value 1 represents failed execution.

*/