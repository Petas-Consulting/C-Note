/*
Sometimes we need to execute a block of statements only when a particular condition is met or not met. This is called decision making, as we are executing a certain code after making a decision in the program logic. For decision making in C++, we have four types of control statements (or control structures), which are as follows:

a) if statement
b) nested if statement
c) if-else statement
d) if-else-if statement*/

// if statement
// if statement is used to execute a block of statements only when a particular condition is met. For example:
#include <iostream>
using namespace std;
int main(){
  int num=70;
  if( num < 100 ){
     /* This cout statement will only execute,
      * if the above condition is true
      */ 
     cout<<"number is less than 100";
  }

  if(num > 100){
     /* This cout statement will only execute,
      * if the above condition is true
      */ 
     cout<<"number is greater than 100";
  }
  return 0;
}
/*
Nested if statement in C++
When there is an if statement inside another if statement then it is called the nested if statement.
The structure of nested if looks like this:

if(condition_1) {
   Statement1(s);

   if(condition_2) {
      Statement2(s);
   }
   }*/
// Statement1 would execute if the condition_1 is true. Statement2 would only execute if both the conditions( condition_1 and condition_2) are true.
#include <iostream>
using namespace std;
int main(){
   int num=90;
   /* Nested if statement. An if statement
    * inside another if body
    */
   if( num < 100 ){
      cout<<"number is less than 100"<<endl;
      if(num > 50){
         cout<<"number is greater than 50";
      } 
   }
   return 0;
}
/* If else statement in C++
Sometimes you have a condition and you want to execute a block of code if condition is true and execute another piece of code if the same condition is false. This can be achieved in C++ using if-else statement.

This is how an if-else statement looks:

if(condition) {
   Statement(s);
}
else {
   Statement(s);
}
The statements inside “if” would execute if the condition is true, and the statements inside “else” would execute if the condition is false.*/
#include <iostream>
using namespace std;
int main(){
   int num=66;
   if( num < 50 ){
      //This would run if above condition is true
      cout<<"num is less than 50";
   }
   else {
      //This would run if above condition is false
      cout<<"num is greater than or equal 50";
   }
   return 0;
}

/* If else if statement in C++
if-else-if Statement in C++
if-else-if statement is used when we need to check multiple conditions. In this control structure we have only one “if” and one “else”, however we can have multiple “else if” blocks. This is how it looks:

// if(condition_1) {
//    if condition_1 is true execute this
//    statement(s);
// }
// else if(condition_2) {
//     execute this if condition_1 is not met and
//     condition_2 is met
//     
//    statement(s);
// }
// else if(condition_3) {
//     execute this if condition_1 & condition_2 are
//     not met and condition_3 is met
//    
//    statement(s);
// }
// .
// .
// .
// else {
//    if none of the condition is true
//     then these statements gets executed
//     
//    statement(s);
// }
*/
#include <iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter an integer number between 1 & 99999: ";
   cin>>num;
   if(num <100 && num>=1) {
      cout<<"Its a two digit number";
   }
   else if(num <1000 && num>=100) {
      cout<<"Its a three digit number";
   }
   else if(num <10000 && num>=1000) {
      cout<<"Its a four digit number";
   }
   else if(num <100000 && num>=10000) {
      cout<<"Its a five digit number";
   }
   else {
      cout<<"number is not between 1 & 99999";
   }
   return 0;
}