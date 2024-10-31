#include<iostream>
#include<stdexcept>
#include"Array.h"
using namespace std;

Array::Array(int arraySize) //small minor mistake here (size})
   :size{(arraySize>0)?static_cast<size_t>(arraySize):throw invalid_argument("Invalid Argument")} //! size is size_t 
   ,ptr{new int[size]} //!What the f..
{}

Array::Array(const Array& right)
:size{right.size}
,ptr{new int[size]}
{
   //Now it's Same size
   for (size_t i = 0; i < size; i++)
   {
      ptr[i] = right.ptr[i];
   }
}

Array::~Array(){
   delete[] ptr;
}

size_t Array::getSize()const{
   return size;
}

Array& Array::operator=(const Array& right){
   if(this!=&right){ //!self assignment(if their addresses are equal)
      if(size!=right.size){
         delete[] ptr;
         size = right.size;
         ptr = new int[size];
      }
      //Now it's Same size
      for (size_t i = 0; i < size; i++)
      {
         ptr[i] = right.ptr[i];
      }        
   }
   return *this;
}

bool Array::operator==(const Array& right)const{
   if(size==right.size){
      for (size_t i = 0; i < size; i++)
      {
         if(ptr[i]!=right.ptr[i]){
            return false; //At least one element doesn't match
         }
      }
      return true; //All elements Match
      
   }
   return false; //Can't compare 2 different sizes
}


int Array::operator[](int subscript)const{
   if(subscript < 0 || subscript >= size){
      throw out_of_range("Out of range Subscript");
   }else{
      return ptr[subscript];
   }
   
}

int& Array::operator[](int subscript){
   if(subscript < 0 || subscript > size){
      throw out_of_range("Out of range Subscript");
   }else{
      return ptr[subscript];
   }
}

// ! Just normal function that take 2 arguments But to access the Object's DataMembers and memberFunctions it has to be a Friend with it 

//cin
istream& operator>>(istream& input,const Array& arr ){
   //* cin = input
   for (size_t i = 0; i < arr.size; i++)
   {
      input >> arr.ptr[i];
   }
   return input; //Cascading(cin >> Array >> Array)
}
//cout 
ostream& operator<<(ostream& output,const Array& arr){
   //* cout = output
   for (size_t i = 0; i < arr.size; i++)
   {
      output << arr.ptr[i] << " ";
   }
   output << endl;
   return output;
   
}
