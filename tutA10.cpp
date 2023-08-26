// #include<iostream>

// using namespace std;


// int main(){
//     int a, b, c;

//     cout<<"Enter the value of a, b and c\n";
//     cin>>a>>b>>c;

//     //  Logical And(&&) Operator

//     if((a > b) && (a > c))
//     {
//         cout<<"a is greatest\n";
//     }
//     else if(b > c)
//     {
//         cout<<"b is greatest\n";
//     }
//     else
//     {
//         cout<<"c is greatest\n";
//     }

//     //  Logical Or(||) Operator

//     if((a == 0) || (b == 0) || (c == 0))
//     {
//         cout<<"The product of a, b and c is zero\n";
//     }

//     return 0;
// }


// Assignment =  Write a program that takes two numbers as input from the user.
//               Check whether the two numbers are equal or not using NOT operator.
//               Hint: (a!=b)

#include<iostream>

using namespace std;

int main(){
    int a, b;

    cout<<"Enter a and b: \n";
    cin>>a>>b; 

    if(a == b)
    {
        cout<<"The value you enter is equal\n";
    }
    else if(a != b)
    {
        cout<<"The value you enter is not equal\n";
    }


    return 0;
}