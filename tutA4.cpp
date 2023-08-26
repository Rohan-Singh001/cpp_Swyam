// #include<iostream>

// using namespace std;

// int a = 5;
// int b = 2;

// void add()
// {
//     int sum;
//     sum = a + b;
//     cout<<"Sum of a and b is "<<sum<<"\n";
// }

// int main()
// {
//     add();

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main(){
//     int a, b, c;

//     cout<<"Enter the value of A \n";
//     cin>>a;
//     cout<<"Enter the value of B \n";
//     cin>>b;

//     c = a - b;

//     cout<<"Diffrence between these two numbers is = "<<c;
    
//     return 0;
// }

#include<iostream>

using namespace std;

int main(){
    float a, b, c;

    cout<<"Enter the value of A \n";
    cin>>a;
    cout<<"Enter the value of B \n";
    cin>>b;

    c = (((a-b)/((a+b)/2))*100);

    cout<<"Diffrence between these two numbers is = "<<c<<"%";
    
    return 0;
}