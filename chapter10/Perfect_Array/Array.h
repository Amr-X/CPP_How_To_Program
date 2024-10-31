#ifndef ARRAY_H
#define ARRAY_H
#include<cstddef> //size_t
#include<iostream>
class Array{ //Array hold Intergers only
//! Stop Forgetting std:: in Headers.
//cin 
friend std::istream& operator>>(std::istream&,const Array&);
//cout 
friend std::ostream& operator<<(std::ostream&,const Array&);

public:
Array(int = 10); //Constructor
Array(const Array&); //Copy constructor
~Array(); //Destructor

size_t getSize()const;

//Operator's Prototype
Array& operator=(const Array&);
bool operator==(const Array&)const;
bool operator!=(const Array& right)const{
    //! Why inline Here?
   return !(*this == right);//Just invert it
}


//!
int& operator[](int); //Lvalue (Reference for it to Change it)
//? How compiler distinguish between those? 
int operator[](int)const; //Rvalue



private:
size_t size;
int* ptr;
};


#endif