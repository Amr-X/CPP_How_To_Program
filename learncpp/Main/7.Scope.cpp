/*

---Global is Initialized 0 By Default
-- const g_x Must Be Initialized

---Variable Shadowing
--When the Inner Variable have same Name as Outer Variable

! There is alot to this (Need To Get Back Here)
---External linkage is Default (Extern)
---Internal Linkage Avoid Name Collision between Diff Files (Static)
---Just use (Function, Variable) in this Translation unit Not other Files



*/
#include<iostream>

void cout(){
  std::cout <<"We Are at the Global NameSpace.\n";
}
namespace MyNameSpaceFunctions{

  namespace InsideNameSpace{
    void cout(){
      std::cout << "We Are at the InsideNameSpace.\n"; 
    }
  }

  void cout(){
    std::cout << "We Are at the UserDefined NameSpace.\n";
  }
  void MyFunction(){//! Also Global!
    cout();   //MyNameSpaceFunction
    ::cout(); //Global
  }
}

int main(){
  std::cout << "From MainStd::cout\n";
  MyNameSpaceFunctions::cout();
  MyNameSpaceFunctions::MyFunction();
  MyNameSpaceFunctions::InsideNameSpace::cout();
  //This Was Headache
  namespace UseMe = MyNameSpaceFunctions::InsideNameSpace;
  UseMe::cout();



}