
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include<string.h>
#include "Bank.h"
#include <exception>

using namespace std;





















//
//
//
//
//
//
//
//
//
//
//class ACCOUNT
//{
//protected:
//   struct personal_info P;
//   struct Account_info A;
//    double balance;
//    Card *C;
//public:
//    //ACCOUNT():Acc_At_Bank("None"),branch_Code("None"), phone_No("none"), Acc_number("none"),balance(0), Card(NULL) {};
//    ACCOUNT()
//    {
//
//    }
//    bool Credit(int x)
//    {
//        if (x<=0)
//        {
//            cout<<"\nBalance input was invalid, balance remain unchanged.\n";
//        }
//        else
//        {
//            balance+=x;
//            cout<<"\nYour credited amount: "<<x<<endl;
//            return true;
//        }
//        return false;
//    }
//    bool Debit(int x)
//    {
//        if (x<=0)
//        {
//            cout<<"\nBalance input was invalid, balance remain unchanged.\n";
//        }
//        else if(balance<x)
//        {
//            cout<<"\nDebit amount exceeded account balance.\n";
//        }
//        else
//        {
//            balance-=x;
//            cout<<"\nYour withdrew amount: "<<x<<endl;
//            return true;
//        }
//        return false;
//    }
//    void display()
//    {
//        cout<<"\nBank :" << A.Acc_At_Bank <<" Branch code :"<<A.branch_Code<<endl;
//        cout<<"Account number :"<<A.Acc_number<<" balance :"<<balance<<endl;
//    }
//    void get_values()
//    {
//        cout<<"\nEnter Name\n";
//        getline(cin,P.name);
//
//        cout<<"\nEnter Address\n";
//        getline(cin,P.address);
//
//        cout<<"\nEnter NIC Number\n";
//        getline(cin,P.NIC);
//
//        cout<<"\nEnter Phone Number\n";
//        getline(cin,P.phone_No);
//
//        cout<<"\nEnter the bank Name\n";
//        getline(cin,A.Acc_At_Bank);
//
//        cout<<"\nEnter Branch code\n";
//        getline(cin,A.branch_Code);
//
//        create_Acc_no();
//
//        cout<<"\nEnter initial Deposit\n";
//        float bal;
//        cin>>bal;
//        Credit(bal);
//        flush_inputt();
//
//        cout<<"Do you want to create Debit card (y/n): ";
//        char ch=getchar();
//        if(ch=='y')
//        {
//            flush_inputt();
//            create_card();
//            C->display();
//        }
//        display();
//    }
//
//    void create_card()
//    {
//        C=new Card;
//    }
//
//
//    void create_Acc_no()
//    {
//        string X="PK HBB ";
//        Acc_Count=Acc_Count+1;
//        A.Acc_number=X+(to_string(Acc_Count));
//
//    }
//    int get_balance()
//    {
//        return balance;
//    }
//
//
//};

