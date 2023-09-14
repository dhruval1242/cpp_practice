#include<iostream>
using namespace std;

class Account{
private:
    string name;
    int account_num;
protected:
    double balance;
public:
    Account(string name, int acc_num, int bal){
        this->name=name;
        account_num=acc_num;
        balance=bal;
    }
    string getName(){
        return name;
    }
    int getAccountNumber(){
        return account_num;
    }
    double getBalance(){
        return balance;
    }
    void Withdraw(double val){
        if(val<0 || balance<val+50){
            cout<<"Insufficient balance\n";
            return;
        }
        balance-=val;
    }
    void Deposit(double val){
        balance+=val;
    }

};
class Savings:public Account{
    double rate;
    public:
        Savings(string name, int acc_num, int balance, double rate):Account(name, acc_num, balance){
            this->rate=rate;
        } 
        double getInterestRate(){
            return this->rate;
        }   
        void accumulateInterest(){
            balance+=(double)(balance*rate)/100;
            // cout<<balance;
        }
};

int main(){
    Savings a("Dk", 123, 11111.0, 5.23235);
    a.Withdraw(50);
    a.Withdraw(50);
    a.Deposit(20);
    a.accumulateInterest();
    cout<<a.getAccountNumber()<<" "<<a.getBalance()<<" "<<a.getName()<<"\n";
    
    Savings b("KD", 321, 10000, 2);
    b.Withdraw(50);
    b.Withdraw(50);
    b.Deposit(200);
    b.accumulateInterest();
    cout<<b.getAccountNumber()<<" "<<b.getBalance()<<" "<<b.getName()<<"\n";
}