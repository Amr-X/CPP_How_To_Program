#include<iostream> //Not Paramitized cout cin fixed
#include<iomanip> // Paramitized setprecision()
using namespace std;
/* 
initialize counter,total
Prompt the user for firstGrade
Input first Grade (Can Be Sential)

while input is not Sential
    Add Grade to total
    Add 1 to counter
    prompt the user again
    input Grade (Can Be Sential)

--->will be here if input is sential
--->Checking if conter didn't go up means no grade entered
check if counter is not zero
    caculate average to total / counter(how many grades entered)
    print total,average
    else
        print No grades were entered
*/




int main(){
    int counter{0},total{0};
    cout<<"Enter Grade or -1 to exit:";
    int grade;
    cin>>grade;

    while(grade!=-1){
        total+=grade;
        counter++;
        cout<<"Enter Grade or -1 to exit:";
        cin>>grade;
    }
    
    if(counter!=0)
    {   //i will make total double,But what about counter? ---> C++ will do a promotion for it literally
        double average =static_cast<double>(total) / counter; //-----> int / int gives you int 3/2=1 if you store it in double would be 1.000000
        cout << "Total of "<<counter<<" grades entered is "<<total<<endl;
        cout<< setprecision(2)<<fixed; //Round
        cout <<"Class average is "<<average<<endl;    
    }
    else{
        cout<<"No Grades were Entered"<<endl;
    }
    return 0;
}