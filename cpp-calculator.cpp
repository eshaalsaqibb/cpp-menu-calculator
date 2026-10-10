#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char runAgain; // for loop repetition

 do {
    char choice; //this is to store the choice of user
    double num1,num2; //double function for decimal numbers

    cout<<"\n--CALCULATOR MENU--"<<endl;
    cout<<"\n1. Addition (+)"<<endl;
    cout<<"2. Subtraction (-)"<<endl;
    cout<<"3. Multiplication (*)"<<endl;
    cout<<"4. Division (/)"<<endl;
    cout<<"5. Modulus (%)"<<endl;
    cout<<"6. Square Root"<<endl;
    cout<<"7. Return to menu"<<endl;
    cout<<"\nEnter your choice!: ";
    cin>>choice;

        if (choice=='1') {
        cout<<"\nEnter two numbers: ";
        cin>>num1>>num2;

        cout<<"\nResult: "<<num1 + num2<<endl;
    }
    if (choice=='2') {
        cout<<"\nEnter two numbers: ";
        cin>>num1>>num2;
        cout<<"\nResult: "<<num1 - num2<<endl;
    }
    if (choice=='3') {
        cout<<"\nEnter two numbers: ";
        cin>>num1>>num2;
        cout<<"\nResult: "<<num1 * num2<<endl;
    }
    if (choice=='4') {
        cout<<"\nEnter two numbers: ";
        cin>>num1>>num2;
        if (num2==0){
            cout<<"\nError! Cannot divide with zero."<<endl;
        }
        else
        cout<<"\nResult: "<<num1 / num2<<endl;
    }
    if (choice=='5') {
        int intnum1,intnum2;
        cout<<"\nEnter two whole numbers: ";
        cin>>intnum1>>intnum2;
        cout<<"\nResult: "<<intnum1 % intnum2<<endl;
    }
    if (choice=='6'){
        double sq_num;
        cout<<"\nEnter a number: ";
        cin>>sq_num;
        cout<<"\nResult: "<<sqrt(sq_num)<<endl;
    }
    if (choice=='7'){
        cout<<"\nBack to menu..."<<endl;
        break;
    }

    cout<<"\nRun another calculation?(y/n): ";
    cin>>runAgain;
 } while(runAgain=='y'||runAgain=='Y');

    cout<<"Calculator closed."<<endl;

    return 0;
}