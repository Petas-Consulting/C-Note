/*
    The this pointer holds the address of current object, in simple words you can say that this pointer points to the current object of the class. Let’s take an example to understand this concept.

C++ Example: this pointer
Here you can see that we have two data members num and ch. In member function setMyValues() we have two local variables having same name as data members name. In such case if you want to assign the local variable value to the data members then you won’t be able to do until unless you use this pointer, because the compiler won’t know that you are referring to object’s data members unless you use this pointer. This is one of the example where you must use this pointer.


*/

#include <iostream>
using namespace std;
class Demo {
private:
  int num;
  char ch;
public:
  void setMyValues(int num, char ch){
    this->num =num;
    this->ch=ch;
  }
  void displayMyValues(){
    cout<<num<<endl;
    cout<<ch;
  }
};
int main(){
  Demo obj;
  obj.setMyValues(100, 'A');
  obj.displayMyValues();
  return 0;
}

/*
    Example 2: function chaining calls using this pointer
Another example of using this pointer is to return the reference of current object so that you can chain function calls, this way you can call all the functions for the current object in one go. Another important point to note in this program is that I have incremented the value of object’s num in the second function and you can see in the output that it actually incremented the value that we have set in the first function call. This shows that the chaining is sequential and the changes made to the object’s data members retains for further chaining calls.
*/
#include <iostream>
using namespace std;
class Demo {
private:
  int num;
  char ch;
public:
  Demo &setNum(int num){
    this->num =num;
    return *this;
  }
  Demo &setCh(char ch){
    this->num++;
    this->ch =ch;
    return *this;
  }
  void displayMyValues(){
    cout<<num<<endl;
    cout<<ch;
  }
};
int main(){
  Demo obj;
  //Chaining calls
  obj.setNum(100).setCh('A');
  obj.displayMyValues();
  return 0;
}