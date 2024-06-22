#include<iostream> 
#include<cstdlib>// srand rand
#include<ctime> // time (0)
#include<string>
using namespace std; 

//i love this game!

int dicePlay(); // prototype function

int main(){
    
    srand(time(0)); // Generate different result every run

    enum class Status{CONTINUE,LOST,WON}; // (0,1,2)our constanat class
    Status gameStatus;
    int diceSum{dicePlay()},myPoint{0}; // now this is sum our first roll

    switch (diceSum) //check for that sum
    {
    case 7:
    case 11:  // 11,7 will make win
        gameStatus = Status::WON;  
        break;
    case 2:
    case 3:
    case 12: //2,3,12 will make you lose
        gameStatus = Status::LOST;
        break;

    default: // other numbers will continue the game to win you have to get same sum again
        gameStatus = Status::CONTINUE;
        myPoint = diceSum; // here storing it
        cout << "Your Point is: "<<myPoint<<endl; //printing to screen
        break;
    }

    while (gameStatus== Status::CONTINUE){ // if we continue we have to do it until win or lose
        diceSum = dicePlay();
        if(diceSum==myPoint){ // you win if your old sum is the current play
            gameStatus= Status::WON;

        }
        else{ // 
            if(diceSum==7){ // you lost if 7
                gameStatus= Status::LOST;
            }
        }

    }
    // here we have gamestatus is either lose or win 
    if (gameStatus==Status::WON){ //this don't need explaination
        cout << "You Won!";
    }else if (gameStatus==Status::LOST){
        cout << "You Lost!";

    }


}

int dicePlay(){ // this is the details of the fuction 
    int dice1{(1+rand()%6)};
    int dice2{(1+rand()%6)};
    int sum = dice1 + dice2;
    cout << "Dice1 is "<<dice1<<" And Dice2 is "<<dice2<<" And sum is "<<sum <<endl;
    return sum;
}