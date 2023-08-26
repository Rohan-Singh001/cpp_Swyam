#include<iostream>

using namespace std;

int main(){
    int x = 0;
    int y = 0;

    // While loop

    // while(x <= 10)
    // {
    //     y = y + x;
    //     cout<<y<<"\n";
    //     x++;
    // }

    // do-while loop

    do
    {
        y = y + x;
        cout<<"\n"<<y;
         x++;
    } while (x <= 10);
    
    return 0;
}




//  Assignment 1 =>
//  Write a program to print the following using for loop.
// 0 1 2 3 4 5 6 7 8 9
// Hint: Syntax
// for(var initialization; condition; var incre-decr)
// {
//  body
// }

// #include<iostream>

// using namespace std;

// int main(){
    
//     int Print_Number;
//     Print_Number = 0;

//     for (int i = 0; i < 10; i++)
//     {
//        cout<<"The number is === "<<Print_Number<<"\n";
//        Print_Number++;
//     }
    
//     return 0;
// }