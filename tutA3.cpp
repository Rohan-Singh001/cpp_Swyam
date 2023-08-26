
//  (1) => Function with Arguments
//  Ex => int add(int a, int b)

// #include<iostream>

// using namespace std;

// int add(int a, int b)
// {
//     int c = a + b;

// }

// int main()
// {   int Sum;

//     Sum = add(5,4);

//     cout<<"Sum is "<<Sum<<"\n";
    
//     return 0;
// }


//  (2) => Function without Arguments
//  Ex => void add()

// #include<iostream>

// using namespace std;

// void add()
// {
//     int a = 5;
//     int b = 4;
//     int c = a + b;

//     cout<<"The sum is "<<c<<"\n";

// }

// int main()
// {  
//     add(); 
//     return 0;
// }

//  Assignment => (1)  Write a program to calculate the square of a number.

// #include<iostream>
// #include<cmath>

// using namespace std;

// int Square_of(int s)
// {
//    int r = (pow(s, 2));
//    return r;
// }

// int main(){
//     int in_Value;
//     cout<<"Welcome to the Rohan Choudhary Square Calculator\n";
//     cout<<"\n";
//     cout<<"Write a Number to calculate the square :\n";
//     cin>>in_Value;
//     cout<<"\n";

//     cout<<"Square of "<<in_Value<<" is = "<<Square_of(in_Value)<<"\n";

    
//     return 0;
// }


//  Assignment => (2)  Write a program to calculate the power of 3 of a number.

#include<iostream>
#include<cmath>

using namespace std;

int Square_of(int s)
{
   int r = (pow(s, 2));
   return r;
}
int Square_3(int t)
{
   int y = (pow(t, 3));
   return y;
}

int main(){
    float in_Value, in_Check;
    cout<<"Welcome to the Rohan Choudhary Square and Cube Calculator\n";
    cout<<"Mode 1 is n Square:\n";
    cout<<"Mode 2 is n Cube:\n";
    cout<<"\n";

    cout<<"Write a Mode Number to perform the mode:\n";
    cin>>in_Check;

    cout<<"Write a Number to perform this mode:\n";
    cin>>in_Value;

    cout<<"\n";

    if (in_Check == 1)
    {
       cout<<"Square of "<<in_Value<<" is = "<<Square_of(in_Value)<<"\n";
    }
    else if (in_Check == 2)
    {
        cout<<"Cube of "<<in_Value<<" is = "<<Square_3(in_Value)<<"\n";
    }
    else
    {
       cout<<"This mode is not avilable on our calculator this time\n";
       cout<<"Sorry for our side\n";
    }
    

    // cout<<"Square of "<<in_Value<<" is = "<<Square_of(in_Value)<<"\n";

    
    return 0;
}