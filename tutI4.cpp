// #include<iostream>
// #include<string>

// using namespace std; 

/*
 1. What is string
 Ans = String is a sequence of characters that is
       treated as a single data item

       size of string = length of string + 1

 2. Declaration of a string
 Ans = char name_of_string[size];
    
       eg. char names[10];

 3. Initialization of a string
 Ans = char var_name[size] = "string";

       eg. char names[10] = "Priya";

       char var_name[] = {'S','t','r','i','n','g'};
 
       eg. char names[] = {'P','r','i','y','a'};

 4. Examples
 5. Some common errors and Their solutions
*/

// int main(){
    
//     string strname;

//     cout<<"Enter the string\n";
//     // cin>>strname;
//     getline(cin, strname);

//     cout<<"The string is "<<strname<<"\n";

//     return 0;
// }



// Assignment 1 =>  Write a program to print a string using the 2nd syntax.
//                  char var_name[] = {'S','t','r','i','n','g'};


#include<iostream>

using namespace std;

int main(){

    // First type

    // char strname[30];

    // cout<<"Enter the string\n";
    // cin>>strname;

    // Second type

    // char strname[] = "ROHAN CHOUDHARY";

    // cout<<"The string is "<<strname<<"\n";

    // Third type
    
    string strname;

    cout<<"Enter the string\n";
    cin>>strname;

    cout<<"The string is "<<strname<<"\n";

    return 0;
}   