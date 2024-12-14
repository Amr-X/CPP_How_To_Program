#include<iostream> 
#include<iomanip>
using namespace std; 

int main(){
    for (int i =10;i>0;i--){
        for (int counter =i;counter > 0;counter--){
        cout << "*";
        }
    cout << endl;
    }
    cout<<"\n\n";


    for(int n{1};n<=10;n++){
        for (int counter =1;counter <=n;counter++){
        cout << "*";
        }
        cout <<endl;
    }
        cout<<"\n\n";

    for(int i{10};i > 0;i--){
        std::string str{};
        for(int j{1};j <= i;j++){
            str +='*';
        }
     std::cout.width(10);
     std::cout << str << std::endl;  
    }

   
}