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
p:
    std::cout<<__FUNCTION__;
    system("cls");
    int choice;
    std::cout<<"\n\n\t\t ATM Managment System";
    std::cout<<"\n\n 1. User Login & Check Balance";
    std::cout<<"\n 2. Withdraw Amount";
    std::cout<<"\n 3. Account Details";
    std::cout<<"\n 4. GO Back";
    std::cout<<"\n\n Enter Your Choice : ";
    std::cin>>choice;

    switch(choice)
    {
    case 1 :
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        Menu();
        break;
    default:
        std::cout<<"\n\n Invalid Value ...Please Try Again...";
    }

    getch();
    goto p;


}

void Bank::BankManagment()
{
p:
    std::cout<<__FUNCTION__;
    system("cls");
    int choice;
    std::cout<<"\n\n\t\t Bank Managment System";
    std::cout<<"\n\n 1. New User";
    std::cout<<"\n 2. Already User";
    std::cout<<"\n 3. Deposit Option";
    std::cout<<"\n 4. Withdraw option";
    std::cout<<"\n 5. Transfer option";
    std::cout<<"\n 6. Payment option";
    std::cout<<"\n 7. Search User Record";
    std::cout<<"\n 8. Edit User Record";
    std::cout<<"\n 9. Delete User Record";
    std::cout<<"\n 10. Show All Records";
    std::cout<<"\n 11. Payment All records";
    std::cout<<"\n 12. Go Back";
    std::cout<<"\n\n Enter Your Choice : ";
    std::cin>>choice;

    switch(choice)
    {
    case 1 :
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 10:
        break;
    case 11:
        break;
    case 12:
        Menu();
        break;
    default:
        std::cout<<"\n\n Invalid Value ...Please Try Again...";
    }

    getch();
    goto p;
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
