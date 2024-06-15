#include<iostream> 
#include<string> //std::string to use String Data Type
//Define an Account Class 
//to use in Account.cpp
//dont use using in header
//no main function here


    class Account { //Creating A Class
        public:
        Account(std::string accountName,int accountBalance) //explicit for only one parameter <===NOTE
        :name{accountName}//initializer
        {                                           // in two ways but this is more effecient for unknown reason (initializing)
            //Or name ={accountName}
            if(accountBalance>0){
                balance = accountBalance;
            }
        }
        //Funciton,Method
         //anyone Can access through main function
        void setName(std::string accountName){
            name = accountName;
        }
        std::string getName() const{ //const To make sure this function doesn't modify Object
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
        //Attribute //always in the end and Private
        private:// Only Accessed by Member Function
        std::string name; //here string data type
        int balance{0};
    };

