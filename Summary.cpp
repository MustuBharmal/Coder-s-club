/*
    C++ was designed by Bjarne Stroustrup
    C++ basic structure
    Hello World Program
    Comments in C++
    Variables and datatype(int,char,double,float,bool,string)
    Input and Output
    Operator(Arithmetic, Relational, Logical and Assignment)
    ASCII(AMerican Standard Code for Information Interchange)
    Conditional Statements(if,if-else,if-elseif-else,switch-case tree example)
    Iterative Statements (Loops)
    Patterns
    Jump Statements(break,continue,return)
    Memory Representation of variables
    Bit Manipulation
    Arrays(1d and 2d)
    Functions


*/
#include <iostream>
using namespace std;
int main()
{
    //Hello World Program
    // cout<<"Hello World"<<endl;

    // Comments
    // This is a single line comment 
    /*
    this 
    is a multiline
    comment
    */
    
    //Variables and Datatypes
    // int a = 10;
    // float f = 25.12;
    // double d = 14.963;
    // char ch = '&';
    // bool b = true;
    // string s = "Murtaza";

    // Input and Output
    // int age;
    // cout<<"My Name is "<<"Murtaza\n"<<endl;
    // cout<<"Please enter my age : ";
    // cin >>age; 
    // cout<<"Thanks my age is "<<age<<endl;

    // Operators 
    int a = 10, b = 20;
    cout<<"a + b = "<<a+b<<endl;
    cout<<"a - b = "<<a-b<<endl;
    cout<<"a / b = "<<a/b<<endl;
    cout<<"a * b = "<<a*b<<endl;
    cout<<"a % b = "<<a%b<<endl;


    // cout<< (a > b)<<endl;
    // >,>=,<,<=,==,!=
    // &&, || , !
    // short-circuit operators
    // (a > b) && (b > c)
    // (a > b) || (b < c)

    // Conditional Statements

    // If else
    a = 10;
    if(a % 2 == 0)
    {
        cout<<"even";
    }
    else
    {
        cout<<" a is not greater than 5";
    }


    // do-while -> Exit Controlled
    /*
    do{

    }while(condition);
    */
    // while -> Entry Controlled
    /*
    while(condition)
    {

    }
    */
    // for loop -> Entry Controlled
    // for(inti; condition ; inc/dec)

    // Memory Representation of variables
    // int a = 9 => 1001

    // [][][][][][]
    // [][][][][][]
    // [][][][][][]
    

    return 0;
}
