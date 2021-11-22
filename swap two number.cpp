#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,temp;
    cout<<"Enter your first number : ";
    cin>>num1;
    cout<<"Enter your second number :";
    cin>>num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"Now your first number : "<<num1<<endl;
     cout<<"Now your second number : "<<num2<<endl;
     getch();
     }
