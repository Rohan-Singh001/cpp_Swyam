// #include<iostream>

// using namespace std;

// int main(){
//     int a, b;

//     cout<<"Enter the value of a and b: \n";
//     cin>>a>>b;

//     if(a > b)
//     {
//         cout<<a<<"is greater than "<<b<<"\n";
//     }
//     else if(a < b)
//     {
//         cout<<a<<" is less than "<<b<<"\n";
//     }
//     else if(a <= b)
//     {
//         cout<<a<<" is less than or equal to "<<b<<"\n";
//     }
//     else if(a >= b)
//     {
//         cout<<a<<" is greater than or equal to "<<b<<"\n";
//     }
//     else if(a == b)
//     {
//         cout<<a<<" is equal to "<<b<<"\n";
//     }
//     else if(a != b)
//     {
//         cout<<a<<" is not equal to "<<b<<"\n";
//     }
    
//     return 0;
// }


// Assignment 1 = Write a program that takes marks of three students as input.
//                Compare the marks to see which student has scored the highest.
//                Check also if two or more students have scored equal marks.


#include<iostream>

using namespace std;

int main(){
    float a, b, c;

    cout<<"Enter student a marks: \n";
    cin>>a;

    cout<<"Enter student b marks: \n";
    cin>>b;

    cout<<"Enter student c marks: \n";
    cin>>c;

    if((a > b) && (a > c))
    {
        cout<<"Congratulation! a achive highest marks in this paper!\n";
    }
    else if((b > a) && (b > c))
    {
       cout<<"Congratulation! b achive highest marks in this paper!\n";  
    }
    else if((c > a) && (c > b))
    {
       cout<<"Congratulation! c achive highest marks in this paper!\n";   
    }
    // else if((a == b) && (b == c))
    // {
    //     cout<<"Congratulation! All student have achive equal marks in this paper!\n";   
    // }

    
    if((a == b) && (b == c))
    {
        cout<<"Congratulation! All student have achive equal marks in this paper!\n";   
    }
    else if(a == b)
    {
        cout<<"Congratulation! a and b achive equal marks in this paper!\n";   
    }
    else if(a == c)
    {
        cout<<"Congratulation! a and c achive equal marks in this paper!\n";   
    }
    else if(b == c)
    {
        cout<<"Congratulation! b and c achive equal marks in this paper!\n";   
    }
    else
    {
        cout<<"Thanks using our exe file! \n";
    }


    return 0;
}