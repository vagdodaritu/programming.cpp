#include<iostream>
using namespace std;
class bank_account{
private://data as well as function
char holder_name[25];
double unique_code;//id number
float balance;
public://function only
   void deposite_money(double);
   void withdrawal_money(double);
   void check_balance(double);
   void create_account();
   int search(int);
};
void deposite_money(double)
{
    int amount;
    cout<<"Enter amount to deposite:";
    cin>>amount;

}
int main()
{
    bank_account b[10];
    int t=0;
    int choice;
    float amount;
    for(int i=0;i<=t-1;i++)
    {
        if(b[i].search()==1);
        t++;
        break;
    }
    cout<<"1.create account"<<endl<<"2.deposite"<<endl<<"3.withdraw"<<endl<<"4.check balance"<<endl<<"5.exit"<<endl;
    switch(choice){
    case 1:createaccount();
        break;
    case 2:cout << "Enter amount to deposit: ";
                cin >> amount;
                deposite(amount);
        break;
    case 3:cout << "Enter amount to deposit: ";
                cin >> amount;
                withdraw(amount);
        break;
    case 4:cout << "Enter account number: ";
                cin >> acconum;
                checkbala(acconum);
                break;
    case 5:cout<<"Thank you"<<endl;
        break;
    default:
        cout<<"invalid"<<endl;

    }



return 0;}
}
