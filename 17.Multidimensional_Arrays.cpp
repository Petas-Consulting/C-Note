/*
Multidimensional arrays are also known as array of arrays. The data in multidimensional array is stored in a tabular form*/

/*
    A two dimensional array:

int arr[2][3];
This array has total 2*3 = 6 elements.

A three dimensional array:

// int arr[2][2][2];
This array has total 2*2*2 = 8 elements.

Two dimensional array
Lets see how to declare, initialize and access Two Dimensional Array elements.

How to declare a two dimensional array?

int myarray[2][3];
Initialization:
We can initialize the array in many ways:
Method 1:

// int arr[2][3] = {10, 11 ,12 ,20 ,21 , 22};
Method 2:
This way of initializing is preferred as you can visualize the rows and columns here.

// int arr[2][3] = {{10, 11 ,12} , {20 ,21 , 22}};


Accessing array elements:
arr[0][0] – first element
arr[0][1] – second element
arr[0][2] – third element
arr[1][0] – fourth element
arr[1][1] – fifth element
arr[1][2] – sixth element

Example: Two dimensional array in C++
*/

#include <iostream>
using namespace std;

int main(){
   int arr[2][3] = {{11, 22, 33}, {44, 55, 66}};
   for(int i=0; i<2;i++){
      for(int j=0; j<3; j++){
        cout<<"arr["<<i<<"]["<<j<<"]: "<<arr[i][j]<<endl;
      }
   }
   return 0;
}

/*Three dimensional array
Lets see how to declare, initialize and access Three Dimensional Array elements.

Declaring a three dimensional array:

int myarray[2][3][2];
Initialization:
We can initialize the array in many ways:
Method 1:

int arr[2][3][2] = {1, -1 ,2 ,-2 , 3 , -3, 4, -4, 5, -5, 6, -6};
Method 2:
This way of initializing is preferred as you can visualize the rows and columns here.

int arr[2][3][2] = {
     { {1,-1}, {2, -2}, {3, -3}},
     { {4, -4}, {5, -5}, {6, -6}}
}
Three dimensional array example
*/

#include <iostream>
using namespace std;

int main(){
   // initializing the array
   int arr[2][3][2] = {
      { {1,-1}, {2,-2}, {3,-3} },
      { {4,-4}, {5,-5}, {6,-6} }
   };
   // displaying array values 
   for (int x = 0; x < 2; x++) {
     for (int y = 0; y < 3; y++) {
       for (int z = 0; z < 2; z++) {
         cout<<arr[x][y][z]<<" ";
       }
     }
   }
   return 0;
}
