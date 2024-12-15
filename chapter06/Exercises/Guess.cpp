#include <iostream>

int getUserNumber(){
  int num{};
  std::cin >> num;
  return num;
}

int generateNumber(){
  return (rand() % 1000 + 1);
}
void playGame(){
      int myNumber{generateNumber()};
    std::cout << "I have a number between 1 and 1000."
              << "\nCan you guess my number?"
              << "\nPlease type your first guess.\n";
    int guessCounter{0};
    while(true){
      int userNumber{getUserNumber()};
      ++guessCounter;
      if(userNumber == myNumber){
        std::cout << "Great Job\n";
        if(guessCounter < 10){
          std::cout << "Either you know the secret or you got lucky!\n" << std::endl;                                 
        }
        else if(guessCounter == 10){
            std::cout << "Ahah!\n" << std::endl;        
        }
        else{
          std::cout << "You should be able to do better!\n" << std::endl;
        }
        break;
      }else{
        if(userNumber > myNumber){
          std::cout << "Your Number is Very High My Friend\nTry Again?";
        }else{
            std::cout << "Your Number is Very Low My Friend\nTry Again?";
        }
      }
    }
    ++guessCounter;
}


int main() {

   srand(time(0));
    while(true){
      playGame();
      std::cout << "Would You Like Another Game? (y,n)";
      char answer{};
      std::cin >> answer;
      if(answer == 'n' || answer == 'N'){
          std::cout << "Thanks For Your Time." << std::endl;
          break;
      }else{
          if(answer != 'y' && answer != 'Y'){
          std::cout << "Invalid Answer - Exiting The Game." << std::endl;
          }
      }
    }
    return 0;
}