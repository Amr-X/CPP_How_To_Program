#include<iostream> 
#include<string>
using namespace std; 
// the best i could do right now without using arrays

int main(){
    int input{0};
    string buildnumber;
    cout << "Enter 5 Integers:";    for (int i =1;i<=5;i++){
        cin >> input; //5
        buildnumber="";
        if(input < 10&& input>0){
        string inputstring = to_string(input); //"5"
        for (int j{1};j<=input;j++){ //;  ;  ;
            buildnumber = buildnumber + inputstring;
        }
        cout << buildnumber<<endl<<buildnumber<<endl;
        }else{
            cout<<"Invalid!"<<endl;
        }

    }
    



}
