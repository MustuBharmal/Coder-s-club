/* "SYNTAX" 
struct struct_name{
structure it stores different or same datatype variables which is called members.
and it also stores functions.
    member 1;
    member 2;
    member 3;
    .
    .
    .
    .
    member n;
};
example of struct
*/
#include<iostream>
using namespace std;
// predefined function
// user defined function (UDF)
struct PersonalData{
    string name;
    int age;
    float salary;

    void printDetail(){}
};
int main(){
    // name, age, salary
    struct PersonalData pd[100];

    for(int i = 0; i < 3; i++){
        cin>>pd[i].name;
        cin>>pd[i].age;
        cin>>pd[i].salary;
    }
    for(int i = 0; i < 3; i++){
        // printf("Name of the person is: %s\n",pd[i].name);
        cout<<"Name of the person is: "<<pd[i].name<<endl;
        cout<<"Age of the person is: "<<pd[i].age<<endl;
        cout<<"Salary of the person is: "<<pd[i].salary<<endl;
    }
    // struct PersonalData pd2;

    // pd1.name = "Mustafa";
    // pd1.age = 23;
    // pd1.salary = 0.0;

    // pd2.name = "Murtaza";
    // pd2.age = 20;
    // pd2.salary = 15000.0;
    
    // printf("Age of the person is: %d\n", pd2.age);
    return 0;
}