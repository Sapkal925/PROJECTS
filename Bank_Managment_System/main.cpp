#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <windows.h>

class Bank
{
public:
    void Menu();
    void BankManagment();
    void AtmManagment();
};

void Bank::AtmManagment()
{
    std::cout<<__FUNCTION__;
}

void Bank::BankManagment()
{
    std::cout<<__FUNCTION__;
}

void Bank::Menu()
{
    std::cout<<__FUNCTION__;
p:
    system("cls");
    int choice;
    char ch;
    std::string pin, pass, email;
    std::cout<<"\n\n\t\t\tControl Pannel";
    std::cout<<"\n\n 1. Bank Managment";
    std::cout<<"\n 2. ATM Managment";
    std::cout<<"\n 3. Exit";
    std::cout<<"\n\n Enter Your Choice : ";
    std::cin>>choice;

    switch(choice)
    {
    case 1:
        system("cls");
        std::cout<<"\n\n\t\t\tLogin Account";
        std::cout<<"\n\n Email: ";
        std::cin>>email;
        std::cout<<"\n\n Pin Code : ";

        for(int i =1; i<=5; i++)
        {
            ch =getch();
            pin += ch;
            std::cout<<"*";
        }

        std::cout<<"\n\n Password : ";

        for(int i=1; i<=5; i++)
        {
            ch =getch();
            pass +=ch;
            std::cout<<"*";
        }

        std::cout<<"\n email = "<<email;
        std::cout<<"\n pin = "<<pin;
        std::cout<<"\n pass = "<<pass;

        if((email == "shri.krushna925@gmail.com") && (pin == "12345")&& (pass == "12345"))
        {
            BankManagment();
        }
        else
        {
            std::cout<<"\n\n Your Email, Pin and Password is Wrong...";
        }
        break;
    case 2:
        AtmManagment();
        break;
    case 3:
        exit(0);
        break;
    default:
        std::cout<<"\n\n Invalid Value...Please Try Again...";
    }
    getch();
    goto p;
}

int main()
{
    std::cout<<__FUNCTION__;

    Bank BankObj;
    BankObj.Menu();
    return 0;
}
