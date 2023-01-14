/*
Data types define the type of data a variable can hold, for example an integer variable can hold integer data, a character type variable can hold character data etc.

Data types in C++ are categorised in three groups: Built-in, user-defined and Derived.*/
/* 
    Built in data types
char: For characters. Size 1 byte.
char ch = 'A';

int: For integers. Size 2 bytes.
int num = 100;

float: For single precision floating point. Size 4 bytes.
float num = 123.78987;

double: For double precision floating point. Size 8 bytes.
double num = 10098.98899;

bool: For booleans, true or false.
bool b = true;

wchar_t: Wide Character. This should be avoided because its size is implementation defined and not reliable.*/

/* 
    User defined data types
These are the data types defined by the user. For example, you can define a structure to hold the details of a student.
    We have three types of user-defined data types in C++
1. struct
2. union
3. enum

*/

struct Student {
    char name[50];
    int roll;
    float marks;
} s1, s2;

/* 
    Derived data types
These are the data types derived from the built-in data types. For example, you can define a pointer to an integer.
   We have three types of derived-defined data types in C++
1. Array
2. Function
3. Pointer

 */
