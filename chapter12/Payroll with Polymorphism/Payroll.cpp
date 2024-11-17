
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include <iomanip>
#include <iostream>
#include <typeinfo> //typeid()
#include <vector>

using namespace std;

int main() {

  cout << fixed << setprecision(2);
  //? NEW Return address

  //! A vector with Pointers Employee Type
  vector<Employee *> employees{
      new SalariedEmployee("John", "Smith", "111-11-1111", 800),
      new CommissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06),
      new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04,
                                     300)};

  for (Employee *employeePtr : employees) {
    cout << employeePtr->toString() << endl;

    //! DownCasting EveryPointer Forcefully
    BasePlusCommissionEmployee *derivedPtr =
        dynamic_cast<BasePlusCommissionEmployee *>(employeePtr);

    //! Wouldn't work with the first 2 Pointers(NullPtr)
    if (derivedPtr != nullptr) {
      double oldBaseSalary = derivedPtr->getBaseSalary();
      cout << "old base salary: $" << oldBaseSalary << endl;
      derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
      cout << "new base salary with 10% increase is: $"
           << derivedPtr->getBaseSalary() << endl;
    }

    cout << "earned $" << employeePtr->earnings() << "\n\n";
  }

  for (const Employee *employeePtr : employees) {

    //!(typeid(X)) --> typeInfoObj.name() --> Integer
    cout << "deleting object of " << typeid(*employeePtr).name() << endl;

    delete employeePtr;
  }
}
