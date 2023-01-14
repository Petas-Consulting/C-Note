/*
    The goto statement is used for transferring the control of a program to a given label. The syntax of goto statement looks like this:

goto label_name;
Program structure:

label1:
...
...
goto label2;
...
..
label2:
...
In a program we have any number of goto and label statements, the goto statement is followed by a label name, whenever goto statement is encountered, the control of the program jumps to the label specified in the goto statement.

goto statements are almost never used in any development as they are complex and makes your program much less readable and more error prone. In place of goto, you can use continue and break statement.
*/

#include <iostream>
using namespace std;
int main(){
   int num; cout<<"Enter a number: "; cin>>num;
   if (num % 2==0){
      goto print;
   }
   else {
      cout<<"Odd Number";
   }

   print:
   cout<<"Even Number";
   return 0;
}
