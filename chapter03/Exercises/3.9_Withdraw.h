#include<iostream> 
#include<string> //std::string to use String Data Type
//Define an Account Class 
//to use in Account.cpp
//dont use using in header
//no main function here


    class Account { 
        public:
        Account(std::string accountName,int accountBalance)
        :name{accountName}
        {                                           
            if(accountBalance>0){
                balance = accountBalance;
            }
        }
        
        void setName(std::string accountName){
            name = accountName;
        }
        std::string getName() const{ 
            return name;
        }
        int getBalance() const{
            return balance;
        }
        void deposite(int depositeValue){
            if(depositeValue>0){
            balance = balance+ depositeValue;
            }
           
        }
        //Added this
        void withdraw(int withdrawvalue){
            if(balance>=withdrawvalue){
            balance=balance-withdrawvalue;
               }
        }
        
        private:
        std::string name; 
        int balance{0};
    };
