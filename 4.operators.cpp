/*
Operator represents an action. For example + is an operator that represents addition. An operator works on two or more operands and produce an output. For example 3+4+5 here + operator works on three operands and produce 12 as output.

    Types of Operators in C++
1) Basic Arithmetic Operators
2) Assignment Operators
3) Auto-increment and Auto-decrement Operators
4) Logical Operators
5) Comparison (relational) operators
6) Bitwise Operators
7) Ternary Operator

    1) Basic Arithmetic Operators
+	Addition
-	Subtraction
*	Multiplication
/	Division
%	Modulus
Note: Modulo operator returns remainder, for example 20 % 5 would return 0
*/
#include <iostream>
using namespace std;
int main(){
  int num1 = 240;
  int num2 = 40;
  cout<<"num1 + num2: "<<(num1 + num2)<<endl;
  cout<<"num1 - num2: "<<(num1 - num2)<<endl;
  cout<<"num1 * num2: "<<(num1 * num2)<<endl;
  cout<<"num1 / num2: "<<(num1 / num2)<<endl;
  cout<<"num1 % num2: "<<(num1 % num2)<<endl;
  return 0;
}

/*
    2) Assignment Operators
=	Assigns value from right side to left side
+=	Adds right side operand to left side operand and assign the result to left operand
-=	Subtracts right operand from left operand and assign the result to left operand
*=	Multiplies right operand with left operand and assign the result to left operand
/=	Divides left operand with right operand and assign the result to left operand
%=	Performs modulus using two operands and assign the result to left operand


num2 = num1 would assign value of variable num1 to the variable.

num2+=num1 is equal to num2 = num2+num1

num2-=num1 is equal to num2 = num2-num1

num2*=num1 is equal to num2 = num2*num1

num2/=num1 is equal to num2 = num2/num1

num2%=num1 is equal to num2 = num2%num1
*/
#include <iostream>
using namespace std;
int main(){
 int num1 = 240;
 int num2 = 40;
 num2 = num1;
 cout<<"= Output: "<<num2<<endl;
 num2 += num1;
 cout<<"+= Output: "<<num2<<endl;
 num2 -= num1;
 cout<<"-= Output: "<<num2<<endl;
 num2 *= num1;      
 cout<<"*= Output: "<<num2<<endl;
 num2 /= num1;      
 cout<<"/= Output: "<<num2<<endl;
 num2 %= num1;      
 cout<<"%= Output: "<<num2<<endl;
 return 0;
}
/*
    3) Auto-increment and Auto-decrement Operators
++	Increments the value of operand by 1
--	Decrements the value of operand by 1
*/
#include <iostream>
using namespace std;
int main(){
  int num1 = 240;
  int num2 = 40;
  num1++; num2--;
  cout<<"num1++ is: "<<num1<<endl;
  cout<<"num2-- is: "<<num2;
  return 0;
}

/*
    4) Logical Operators    
&&	Logical AND
||	Logical OR
!	Logical NOT


Let’s say we have two boolean variables b1 and b2.
b1&&b2 will return true if both b1 and b2 are true else it would return false.

b1||b2 will return false if both b1 and b2 are false else it would return true.

!b1 would return the opposite of b1, that means it would be true if b1 is false and it would return false if b1 is true.
*/
#include <iostream>
using namespace std;
int main(){
   bool b1 = true;
   bool b2 = false;
   cout<<"b1 && b2: "<<(b1&&b2)<<endl;
   cout<<"b1 || b2: "<<(b1||b2)<<endl;
   cout<<"!(b1 && b2): "<<!(b1&&b2);
   return 0;
}

/*
    5) Comparison (relational) operators
==	Checks if the values of two operands are equal or not, if yes then condition becomes true.
!=	Checks if the values of two operands are equal or not, if values are not equal then condition becomes true.
>	Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true.
<	Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true.
>=	Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true.
<=	Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true.
*/
#include <iostream>
using namespace std;
int main(){
   int num1 = 240;
   int num2 =40;
   if (num1==num2) {
      cout<<"num1 and num2 are equal"<<endl;
   }
   else{
      cout<<"num1 and num2 are not equal"<<endl;
   }
   if( num1 != num2 ){
      cout<<"num1 and num2 are not equal"<<endl;
   }
   else{ 
      cout<<"num1 and num2 are equal"<<endl;
   }
   if( num1 > num2 ){
      cout<<"num1 is greater than num2"<<endl;
   }
   else{
      cout<<"num1 is not greater than num2"<<endl;
   }
   if( num1 >= num2 ){ 
      cout<<"num1 is greater than or equal to num2"<<endl;
   }
   else{
      cout<<"num1 is less than num2"<<endl;
   }
   if( num1 < num2 ){
      cout<<"num1 is less than num2"<<endl;
   }
   else{
      cout<<"num1 is not less than num2"<<endl;
   }
   if( num1 <= num2){
      cout<<"num1 is less than or equal to num2"<<endl;
   }
   else{
      cout<<"num1 is greater than num2"<<endl;
   }
   return 0;
}

/*
    6) Bitwise Operators
&	Binary AND Operator copies a bit to the result if it exists in both operands
|	Binary OR Operator copies a bit if it exists in either operand
^	Binary XOR Operator copies the bit if it is set in one operand but not both
~	Binary Ones Complement Operator is unary and has the effect of 'flipping' bits
<<	Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand
>>	Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand


num1 & num2 compares corresponding bits of num1 and num2 and generates 1 if both bits are equal, else it returns 0. In our case it would return: 2 which is 00000010 because in the binary form of num1 and num2 only second last bits are matching.

num1 | num2 compares corresponding bits of num1 and num2 and generates 1 if either bit is 1, else it returns 0. In our case it would return 31 which is 00011111

num1 ^ num2 compares corresponding bits of num1 and num2 and generates 1 if they are not equal, else it returns 0. In our example it would return 29 which is equivalent to 00011101

~num1 is a complement operator that just changes the bit from 0 to 1 and 1 to 0. In our example it would return -12 which is signed 8 bit equivalent to 11110100

num1 << 2 is left shift operator that moves the bits to the left, discards the far left bit, and assigns the rightmost bit a value of 0. In our case output is 44 which is equivalent to 00101100

Note: In the example below we are providing 2 at the right side of this shift operator that is the reason bits are moving two places to the left side. We can change this number and bits would be moved by the number of bits specified on the right side of the operator. Same applies to the right side operator.

num1 >> 2 is right shift operator that moves the bits to the right, discards the far right bit, and assigns the leftmost bit a value of 0. In our case output is 2 which is equivalent to 00000010


*/
#include <iostream>
using namespace std;
int main(){
   int num1 = 11;  /* 11 = 00001011 */
   int num2 = 22;  /* 22 = 00010110 */ 
   int result = 0;
   result = num1 & num2;
   cout<<"num1 & num2: "<<result<<endl;
   result = num1 | num2;
   cout<<"num1 | num2: "<<result<<endl;
   result = num1 ^ num2;
   cout<<"num1 ^ num2: "<<result<<endl;
   result = ~num1;
   cout<<"~num1: "<<result<<endl;
   result = num1 << 2;
   cout<<"num1 << 2: "<<result<<endl;
   result = num1 >> 2;
   cout<<"num1 >> 2: "<<result;
   return 0;
}

/*
    7) Ternary Operator
The ternary operator is a conditional operator that evaluates something based on a condition being true or false. It can be used as a one line if-then-else statement. The general form is:
    Syntax:

variable num1 = (expression) ? value if true : value if false

If the expression results true then the first value before the colon (:) is assigned to the variable num1 else the second value is assigned to the num1.
*/

#include <iostream>
using namespace std;
int main(){
  int num1, num2; num1 = 99;
  /* num1 is not equal to 10 that's why
   * the second value after colon is assigned
   * to the variable num2
   */
  num2 = (num1 == 10) ? 100: 200;
  cout<<"num2: "<<num2<<endl;
  /* num1 is equal to 99 that's why
   * the first value is assigned
   * to the variable num2
   */
  num2 = (num1 == 99) ? 100: 200;
  cout<<"num2: "<<num2;
  return 0;
}
