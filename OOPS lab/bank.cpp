#include <iostream>
using namespace std;
class bank{
    public:
    char name[50];
    int no,type,bal,dep,with;
    void get(){
       cout<<"Enter you name: ";
       cin>>name;
       cout<<"Enter your account number";
       cin>>no;
       cout<<"Enter the balance in your account";
       cin>>bal;
       cout<<"Choose account type: (type in the number) \n1.Savings account\n2.Current account\n3.Salary account ";
       cin>>type;
    }
    void deposit(){
        char n; 
        cout<<"Do you want to deposit money?(Y/n)";
        cin>>n;
        if(n=='Y'||n=='y'){
            cout<<"Enter the amount to be deposited: ";
            cin>>dep;
            bal = bal+dep;
        }
    }
    void withdraw(){
        char n; 
        cout<<"Do you want to withdraw money?(Y/n)";
        cin>>n;
        if(n=='Y'||n=='y'){
            cout<<"Enter the amount to be deposited: ";
            cin>>with;
            if(with>bal){
                cout<<"Insufficient balance";
            } else{
                bal = bal-with;
            }
        }
    }
    void display(){
        cout<<"The balance for "<<name<<"'s account is "<<bal<<" .";
    }
};
int main(){
    bank b;
    b.get();
    b.deposit();
    b.withdraw();
    b.display();
}