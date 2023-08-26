// #include<iostream>

// using namespace std;

// int main(){
//     int a, b, sum;

//     cout<<"Enter the value of a and b \n";

//     cin>>a>>b;

//     sum = a + b;

//     cout<<"Sum of a and b is "<<sum<<"\n";

//     if(sum > 20)
//     {
//         cout<<"Sum is greater than 20\n";
//     }
//     else if(sum > 10)
//     {
//         cout<<"Sum is greater than 10 and less than 20\n";
//     }
//     else
//     {
//         cout<<"Sum is less than 10\n";
//     }

//     return 0;
// }


//  Assignment 1


// #include<iostream>

// using namespace std;

// int main(){
//     int a, b;

//     cout<<"Enter the value of a and b \n";

//     cin>>a>>b;

//     if(a > b)
//     {
//         cout<<"a is greater than b\n";
//     }
//     else
//     {
//         cout<<"a is less than b\n";
//     }

//     return 0;
// }

//  Assignment 2


#include<iostream>

using namespace std;

int main(){
    int a, b, c;

    cout<<"Enter the value of a, b and c \n";

    cin>>a>>b>>c;


    if(a > b && a > c)
    {
        cout<<"a is greater than b and c\n";
    }
    else if(b > a && b > c)
    {
        cout<<"b is greater than a and c\n";
    }
    else if(c > a && c > b)
    {
        cout<<"c is greater than a and b\n";
    }
    else
    {
        cout<<"Both are equal!!!!\n";
    }

    return 0;
}