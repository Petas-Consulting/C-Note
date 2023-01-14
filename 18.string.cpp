/*
    Strings are words that are made up of characters, hence they are known as sequence of characters. In C++ we have two ways to create and use strings: 1) By creating char arrays and treat them as string 2) By creating string object

Lets discuss these two ways of creating string first and then we will see which method is better and why.

1) Array of Characters – Also known as C Strings
Example 1:
A simple example where we have initialized the char array during declaration.
*/

#include <iostream>
using namespace std;
int main(){
   char book[50] = "A Song of Ice and Fire";
   cout<<book;
   return 0;
}

// Example 2: Getting user input as string
// This can be considered as inefficient method of reading user input, why? Because when we read the user input string using cin then only the first word of the string is stored in char array and rest get ignored. The cin function considers the space in the string as delimiter and ignore the part after it.
#include <iostream>
using namespace std;
int main(){
   char book[50];
   cout<<"Enter your favorite book name:";
   //reading user input
   cin>>book;
   cout<<"You entered: "<<book;
   return 0;
}

// You can see that only the “The” got captured in the book and remaining part after space got ignored. How to deal with this then? Well, for this we can use cin.get function, which reads the complete line entered by user.

// Example 3: Correct way of capturing user input string using cin.get
#include <iostream>
using namespace std;
int main(){
   char book[50];
   cout<<"Enter your favorite book name:";
 
   //reading user input
   cin.get(book, 50);
   cout<<"You entered: "<<book;
   return 0;
}

/*
Drawback of this method
1) Size of the char array is fixed, which means the size of the string created through it is fixed in size, more memory cannot be allocated to it during runtime. For example, lets say you have created an array of character with the size 10 and user enters the string of size 15 then the last five characters would be truncated from the string.
On the other hand if you create a larger array to accommodate user input then the memory is wasted if the user input is small and array is much larger then what is needed.

2) In this method, you can only use the in-built functions created for array which don’t help much in string manipulation.

What is the solution of these problems?
We can create string using string object. Lets see how we can do it.

String object in C++
Till now we have seen how to handle strings in C++ using char arrays. Lets see another and better way of handling strings in C++ – string objects.*/

#include<iostream>
using namespace std;
int main(){
   // This is how we create string object
   string str;
   cout<<"Enter a String:";
   /* This is used to get the user input
    * and store it into str
    */
   getline(cin,str);
   cout<<"You entered: ";
   cout<<str<<endl;

   /* This function adds a character at
    * the end of the string
    */ str.push_back('A');
   cout<<"The string after push_back: "<<str<<endl;
   /* This function deletes a character from
    * the end of the string
    */
   str.pop_back();
   cout << "The string after pop_back: "<<str<<endl;
   return 0;
}
// The advantage of using this method is that you need not to declare the size of the string, the size is determined at run time, so this is better memory management method. The memory is allocated dynamically at runtime so no memory is wasted.
