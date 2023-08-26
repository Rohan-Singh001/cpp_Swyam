// #include<iostream>

// using namespace std;

// // Notes===>

// /*
//   Increment and Decrement Operators
  
//   1. (++) Increment Operator

//     (i)=  a++ is a postfix increment operator
//     (ii)= ++a is a prefix increment operator
    
//   2. (--) Decrement Operator

//     (i)=  a-- is a postfix Decrement operator
//     (ii)= --a is a prefix Decrement operator 
// */

// /*
//   * The ++ Operator increses the existing value of the operand by one
//   * a++ and ++a are equivalent to a = a + 1
//   * The -- Operator decreases the existing value of the operand by one
//   * a-- and --a are equivalent to a = a - 1
// */

// int main(){

//     // int a = 1;

//     // cout<<"a's value is now "<<a++<<"\n";
//     // cout<<"a's value is now "<<a<<"\n";

//     // a = 1;
//     // cout<<"a's value is now "<<++a<<"\n";
//     // cout<<"a's value is now "<<a<<"\n";

//     // a = 1;
//     // cout<<"a's value is now "<<a--<<"\n";
//     // cout<<"a's value is now "<<a<<"\n";

//     // a = 1;
//     // cout<<"a's value is now "<<--a<<"\n";
//     // cout<<"a's value is now "<<a<<"\n";

//     // Typecasting

//     int a, b;
//     float c;

//     a = 5;
//     b = 2;

//     c = a/b;

//     cout<<"Value of c is "<<c<<"\n";
//     c = (float)a/b;
//     cout<<"Value of c is "<<c<<"\n";
    
//     return 0;
// }



// Assignment 1 = Write a program to solve the following expression: (a/b) + (c/d)
// The values of a, b, c and d are taken as input from the user. Use typecasting to perform real division.

#include<iostream>

using namespace std;

int main(){

    int a, b, c, d;
    float e;

    cout<<"Enter the value of a: \n";
    cin>>a;

    cout<<"Enter the value of b: \n";
    cin>>b;

    cout<<"Enter the value of c: \n";
    cin>>c;

    cout<<"Enter the value of d: \n";
    cin>>d;

    cout<<"The Answer Without typecasting is = "<<(a/b)+(c/d)<<"\n";

    e = ((float)a/b) + ((float)c/d);

    cout<<"The Answer is = "<<e<<"\n";
    
    return 0;
}