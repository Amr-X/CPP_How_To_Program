#include<iostream> 
using namespace std; 

int main(){
    /*Start
      set totalgrade 0
      set counter 1
      as long as counter less than or equal 10 
        do this
            1.prompt "Enter grade"
            2.take input
            3.add to total
            4.counter add 1 
      average = total/10
      output average to screen with total
      End    
    */
   int total{0};
   unsigned int counter{1};//unsigned int all positive values integers
   cout<<"Note Grade 0 to 100\n";
   while(counter<=10){
    cout<< "Enter Grade:";
    int grade;
    cin>>grade;
    total=total+grade;
    counter = counter +1;
   }
   int average = total/10;
   cout<<"Total of all 10 grades is "<<total<<endl;
   cout<< "Class average is "<<average<<"%"<<endl;
}