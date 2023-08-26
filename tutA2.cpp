// #include<iostream>

// using namespace std;

// int main()
// {
//     int a = 2;
//     double const b = 4;
//     float c = 1.5;
//     char d = 'A';

//     cout<<"The value of a is "<<a<<"\n";
//     cout<<"The value of b is "<<b<<"\n";
//     cout<<"The value of c is "<<c<<"\n";
//     cout<<"The value of d is "<<d<<"\n";

//     return 0;
// }

//  Assignment

//  (1) => In this code our value is alredy assigned !

// #include<iostream>

// using namespace std;

// int main()
// {
//     float P;  // This is the principal amount
//     float R; // This is intrest rate
//     float Y; // This is year

//     float RA; // This is return amount

//     P = 50000;
//     R = 3.5;
//     Y = 3;

//     RA = (P+((P*R*Y)/100));
//     cout<<"This is Return amount = "<<RA<<"\n";
   
//     return 0;
// }


//  (2) => In this code our compiler gather values and then run code !

#include<iostream>

using namespace std;

int main()
{
    float P;  // This is the principal amount
    float const R = 3; // This is intrest rate
    float Y; // This is year

    float RA; // This is return amount

    cout<<"\nWelcome Rohan Choudhary Bank of Loan \n"<<endl;

   cout<<"Enter the ammount you need \n";
   cin>>P;

   cout<<"Simple Intrest is alredy defined \n"<<endl;

   cout<<"Enter the years you needed \n";
   cin>>Y;

    RA = (P+((P*R*Y)/100));
    // RA = ((P * R * Y)/100);
    cout<<"The amount you Return after "<<Y<<" years is = "<<RA<<"\n";
   
    return 0;
}