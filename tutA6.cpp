//********** Nested if(if else ladder) Statement ***********

// #include<iostream>

// using namespace std;

// int main(){
//     int x, y;
//     cout<<"Enter a number between 0 to 39: ";
//     cin>>y;

//     if(y/10 == 0)
//     {
//         cout<<"You have entered the number in the range of 0 to 9\n";
//     }
//     else if(y/10 == 1)
//     {
//          cout<<"You have entered the number in the range of 10 to 19\n";
//     }
//     else if(y/10 == 2)
//     {
//          cout<<"You have entered the number in the range of 20 to 29\n";
//     }
//     else if(y/10 == 3)
//     {
//          cout<<"You have entered the number in the range of 30 to 39\n";
//     }
//     else
//     {
//         cout<<"number not in range \n";
//     }

//     return 0;
// }

//******* Switch Statement **********

// #include<iostream>

// using namespace std;

// int main(){
//     int x, y;
//     cout<<"Enter a number between 0 to 39: ";
//     cin>>y;

//     x = y/10;

//     switch (x)
//     {

//     case 0:
//         cout<<"You have entered the number in the range of 0 to 9\n";
//         break;

//     case 1:
//          cout<<"You have entered the number in the range of 10 to 19\n";
//          break;

//     case 2:
//          cout<<"You have entered the number in the range of 20 to 29\n";
//          break;

//     case 3:
//          cout<<"You have entered the number in the range of 30 to 39\n";
//          break;

//     default:
//          cout<<"number not in range \n";

//     }

//     return 0;
// }



//  Assignment 1 =  Write a program to check whether the age of the employee is between 20-60.
//   In this assignment i am using Switch Statement.

// #include<iostream>

// using namespace std;

// int main(){
//    int x;

//    cout<<"Plese enter your age: \n";
//    cin>>x;

//    switch(x)
//    {
//      case 1 ... 19:
//      cout<<"Sorry, you are not eligible! \n";
//      break;

//      case 20 ... 60:
//      cout<<"Hurray! you are eligible \n";
//      break;

//      case 61 ... 120:
//      cout<<"Sorry, you are not eligible! \n";
//      break;

//      default:
//      cout<<"You are not Human!!! \n";
//      break;
//    }
//     return 0;
// }


//  Assignment 2 =  Write a program to check whether the age of the employee is between 20-60.
//  In this assignment i am using Nested if(if else ladder) Statement.

#include<iostream>

using namespace std;

int main(){
   int x;

   cout<<"Plese enter your age: \n";
   cin>>x;

   if(x >= 0 && x < 20 )
   {
     cout<<"Sorry, you are not eligible! \n";
   }
   else if(x >= 20 && x <=60)
   {
     cout<<"Hurray! you are eligible \n";
   }
   else if(x > 60 && x <= 120)
   {
     cout<<"Sorry, you are not eligible! \n";
   }
   else
   {
     cout<<"You are not Human!!! \n";
   }
   
    return 0;
}