/*
    The break statement is used in following two scenarios:

a) Use break statement to come out of the loop instantly. Whenever a break statement is encountered inside a loop, the control directly comes out of loop terminating it. It is used along with if statement, whenever used inside loop(see the example below) so that it occurs only for a particular condition.

b) It is used in switch case control structure after the case blocks. Generally all cases in switch case are followed by a break statement to avoid the subsequent cases (see the example below) execution. Whenever it is encountered in switch-case block, the control comes out of the switch-case body.

    Syntax of break statement
break;
*/

/*
    Use of break statement in a while loop
In the example below, we have a while loop running from 10 to 200 but since we have a break statement that gets encountered when the loop counter variable value reaches 12, the loop gets terminated and the control jumps to the next statement in program after the loop body.
*/
#include <iostream>
using namespace std;
int main(){
   int num =10;
   while(num<=200) {
      cout<<"Value of num is: "<<num<<endl;
      if (num==12) {
         break;
      }
      num++;
   } 
   cout<<"Hey, I'm out of the loop";
   return 0;
}


// break statement in for loop
#include <iostream>
using namespace std;
int main(){
   int var;
   for (var =200; var>=10; var --) {
      cout<<"var: "<<var<<endl;
      if (var==197) {
         break;
      }
   }
   cout<<"Hey, I'm out of the loop";
   return 0;
}


// break statement in Switch Case
#include <iostream>
using namespace std;
int main(){
   int num=2;
   switch (num) {
      case 1: cout<<"Case 1 "<<endl;
      break;
      case 2: cout<<"Case 2 "<<endl;
      break;
      case 3: cout<<"Case 3 "<<endl;
      break;
      default: cout<<"Default "<<endl;
   }
   cout<<"Hey, I'm out of the switch case";
   return 0;
}