#include<iostream> 
#include<climits>
using namespace std; 

int main(){
    int counter{1},numbercount{0},inputnumber{0};
    cout << "Enter How Many Number to Enter: ";
    cin >> numbercount;

    if (numbercount>0){
        //just for first time
        cout<< "> ";
        cin>> inputnumber;
        int smallest = inputnumber;


        while(counter <numbercount){
            cout<< "> ";
            
            cin>> inputnumber;

            if(inputnumber<=smallest)
            {
            smallest = inputnumber;
            }
            counter++;
            }

            

            cout << "\n"<< smallest;
    }

    else{
        cout << "Invalid!";
    }
    

}