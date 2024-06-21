#include<iostream> 
#include <iomanip>
using namespace std; 
// i got help
//result is not Accually PI
int main(){
    double PI{4.0};
    int sign =-1;
    for (int i{3};i<20000;i+=2){ // 3..5..7..9..11..13
        PI += sign * (4.0/i); 
        sign = -sign; // flips the sign 
    }   


    cout << setprecision(60);
    cout << PI << endl;
}