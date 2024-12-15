#include<iostream>
#include<iomanip>
#include<string>
int main()
{
  //! Getline in <stream>
  std::string str{};
  std::getline(std::cin,str);

  //1# cin will Not Overflow -- Overloaded with >> with Char Datatype Reads one at a time
  //2# Will Skip any (space, tab, newline)
    char ch{};
    while (std::cin >> ch)
        std::cout << ch;


  //1# .get(ch) to get EveryCharacter
    char ch2{};
    while (std::cin.get(ch2))
        std::cout << ch;


  char buffer[10];
//std::cin >> buffer; //Can Be Overflowed
  std::cin >> std::setw(10) >> buffer; //takes 9 and Delimiter "\0"

  //Behavior of ios_base
  std::cout.setf(std::ios::showbase);
  std::cout << std::hex <<10;           //!hex just set the hex flag
    return 0;
}