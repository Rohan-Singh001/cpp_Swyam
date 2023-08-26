// #include<iostream>

// using namespace std;

// /*
//  Notes =
//  * 2D arrays are stored in a row column matrix
//  * The left index indicates the row
//  * The right index indicates the column
//  * Starting index of a matrix or array in C++ is always 0
// */

// // data_type arr_name[row][col];

// /*
//  Notes
//  * To add elements in a 2D array.
//  * To print 2D array
//  * To calculate the sum of 2D array
// */

// int main(){
//     int i, j;

//     int num1[3][4], num2[3][4];

//     cout<<"Enter the elements of 3 * 4 array num1\n";
//     for(i = 0; i < 3; i++)
//     for(j = 0; j < 4; j++)
//     cin>>num1[i][j];

//     cout<<"Enter the elements of 3 * 4 array num2\n";
//     for(i = 0; i < 3; i++)
//     for(j = 0; j < 4; j++)
//     cin>>num2[i][j];

//     cout<<"The 3 * 4 array num1 is\n";
//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 4; j++)
//         cout<<num1[i][j]<<"\t";
//         cout<<"\n";
//     }
//     cout<<"The 3 * 4 array num2 is\n";
//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 4; j++)
//         cout<<num2[i][j]<<"\t";
//         cout<<"\n";
//     }
//     cout<<"The sum of num1 and num 2 is\n";
//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 4; j++)
//         cout<<(num1[i][j] + num2[i][j])<<"\t";
//         cout<<"\n";
//     }


//     return 0;
// }



// Assignment 1 => Write a program that takes two 2D arrays as input from the user.
// Subtract them and find the result.

#include<iostream>

using namespace std;

int main(){
    int i, j;

    int num1[3][4], num2[3][4];

    cout<<"Enter the elements of 3 * 4 array num1\n";
    for(i = 0; i < 3; i++)
    for(j = 0; j < 4; j++)
    cin>>num1[i][j];

    cout<<"Enter the elements of 3 * 4 array num2\n";
    for(i = 0; i < 3; i++)
    for(j = 0; j < 4; j++)
    cin>>num2[i][j];

    cout<<"The 3 * 4 array num1 is\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        cout<<num1[i][j]<<"\t";
        cout<<"\n";
    }

    cout<<"The 3 * 4 array num2 is\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        cout<<num2[i][j]<<"\t";
        cout<<"\n";
    }

    cout<<"The sum of num1 and num 2 is\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        cout<<(num1[i][j] - num2[i][j])<<"\t ";
        cout<<"\n";
    }

    return 0;
}