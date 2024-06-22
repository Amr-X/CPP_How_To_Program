#include<iostream> 
#include<iomanip>
#include<cstdlib> //have function prototype for rand()
using namespace std; 

int main(){
    unsigned int freq1{0},freq2{0},freq3{0},freq4{0},freq5{0},freq6{0};
    int face{0};
    for (unsigned int roll{1};roll<=60'000'000;roll++){ // ' digit seperator
        face = (1+rand()%6);
        switch(face){
            case 1:
            ++freq1;
            break;
            
            case 2:
            ++freq2;
            break;

            case 3:
            ++freq3;
            break;

            case 4:
            ++freq4;
            break;

            case 5:
            ++freq5;
            break;

            case 6:
            ++freq6;
            break;
            
            default:
             cout << "Program should not be here!"<<endl; // always do that even if you are absolutely certain that you have no bugs!
        }
    }
    cout <<"Face"<<setw(13)<<"Frequency" << endl;
    cout << setw(4)<<"1"<<setw(13)<<freq1<<endl;
    cout << setw(4)<<"2"<<setw(13)<<freq2<<endl;
    cout << setw(4)<<"3"<<setw(13)<<freq3<<endl;
    cout << setw(4)<<"4"<<setw(13)<<freq4<<endl;
    cout << setw(4)<<"5"<<setw(13)<<freq5<<endl;
    cout << setw(4)<<"6"<<setw(13)<<freq6<<endl;
    //output shows they are really close (Probability Speaking)
}