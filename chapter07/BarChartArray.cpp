#include<iostream> 
#include <array>
using namespace std; 

int main(){
    /*Bar Chart */

    const size_t arraySize{11};
    array<int,arraySize> gradeCount = {0,0,0,0,0,0,1,2,4,2,1};

    cout << "Grade Distribution:"<<endl;

    for (size_t i{0};i<gradeCount.size();i++){  
        // i feel there should be a better one but okey
        if (i==0){
            cout << "  0-9: ";
        }
        else if (i==10){
            cout<< "  100: ";
        }
        else {
            cout << i *10 <<"-"<< (i*10)+9 << ": ";    
        }

        for (size_t j{0};j<gradeCount[i];j++){
        cout << "*";    
        }

        cout <<endl;            
        

    }
    
    
}