/*
A loop is used for executing a block of statements repeatedly until a particular condition is satisfied. For example, when you are displaying number from 1 to 100 you may want set the value of a variable to 1 and display it 100 times, increasing its value by 1 on each loop iteration.

In C++ we have three types of basic loops: for, while and do-while. In this tutorial we will learn how to use “for loop” in C++.

Syntax of for loop
for(initialization; condition ; increment/decrement)
{
   C++ statement(s);
}


First step: In for loop, initialization happens first and only once, which means that the initialization part of for loop only executes once.

Second step: Condition in for loop is evaluated on each loop iteration, if the condition is true then the statements inside for for loop body gets executed. Once the condition returns false, the statements in for loop does not execute and the control gets transferred to the next statement in the program after for loop.

Third step: After every execution of for loop’s body, the increment/decrement part of for loop executes that updates the loop counter.

Fourth step: After third step, the control jumps to second step and condition is re-evaluated.

// The steps from second to fourth repeats until the loop condition returns false.
*/


// Here in the loop initialization part I have set the value of variable i to 1, condition is i<=6 and on each loop iteration the value of i increments by 1.
#include <iostream>
using namespace std;
int main(){
   for(int i=1; i<=6; i++){
      /* This statement would be executed
       * repeatedly until the condition
       * i<=6 returns false.
       */
      cout<<"Value of variable i is: "<<i<<endl;
   }
   return 0;
}

// Infinite for loop in C++
//A loop is said to be infinite when it executes repeatedly and never stops. This usually happens by mistake. When you set the condition in for loop in such a way that it never return false, it becomes infinite loop.

// For example:

#include <iostream>
using namespace std;
int main(){
   for(int i=1; i>=1; i++){
      cout<<"Value of variable i is: "<<i<<endl;
   }
   return 0;
}
/*
This is an infinite loop as we are incrementing the value of i so it would always satisfy the condition i>=1, the condition would never return false.

Here is another example of infinite for loop:

// infinite loop
for ( ; ; ) {
   // statement(s)
}
*/

// Example: display elements of array using for loop
#include <iostream>
using namespace std;
int main(){
   int arr[]={21,9,56,99, 202};
   /* We have set the value of variable i
    * to 0 as the array index starts with 0
    * which means the first element of array 
    * starts with zero index.
    */
   for(int i=0; i<5; i++){
      cout<<arr[i]<<endl;
   }
   return 0;
}