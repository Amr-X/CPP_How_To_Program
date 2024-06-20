#include<iostream> 
#include<iomanip>
using namespace std; 

int main(){
    int grade{0},total{0},counter{0},aCount{0},bCount{0},cCount{0},dCount{0},fCount{0};
    cout << "Enter the integer grades in the range 0-100.\n"
    <<"Type the end-of-file indicator to terminate input: \n"
    <<"   On UNIX/Linux/Mac OS X type <Ctrl> d then press Enter\n"
    <<"   On Windows type <Ctrl> z then press Enter"<<endl;

   while(cin >> grade){
        total+=grade;
        counter++; // to know how many inputs (grades entered)
        switch(grade/10){ // insteaad of 100 or 90 it should be 10,9 cases
            case 10:
            case 9:
                ++aCount;
                break; // if we go here then exit the switch don't check other cases
            case 8:
                ++bCount;
                break;
            case 7:
                ++cCount;
                break;
            case 6:
                ++dCount;
                break;
            default: //if non work above
                ++fCount;
                break; //Optinal
        }

    }   if (counter!=0)
        {
        cout << "\nGrade Report:"<<endl;
        cout << "Total orf the "<<counter<<" grades entered is "<<total<<endl;
        double average = static_cast<double>(total) / counter;
        cout << setprecision(2)<<fixed; // to be float number 80.00
        cout <<"Class average is "<<average<<endl;
        cout<<"\nNumber of students who received each grade: "<<endl;
        cout<<"A: "<<aCount<<"\nB: "<<bCount<<"\nC: "<<cCount<<"\nD: "<<dCount<<"\nF: "<<fCount<<endl;
        }
        else{ //counter is 0 (means non entered)
        cout << "No Grades Entered"<<endl;
    }
        

}