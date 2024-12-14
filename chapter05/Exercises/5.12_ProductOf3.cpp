#include<iostream> 


int main(){
      double product{1};
    
    for(int i{3};i<=50;i+=3){
        product *= i;
    }

    std::cout <<"Product of Multiples Of 3\n"
    << "From Range 3 to 50 is: "<< product << std::endl;

}