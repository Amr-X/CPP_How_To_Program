#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);

int main() {
  cout << fixed << setprecision(2);

  SalariedEmployee salariedEmployee{"John", "Smith", "111-11-1111", 800};
  CommissionEmployee commissionEmployee{"Sue", "Jones", "333-33-3333", 10000,
                                        .06};
  BasePlusCommissionEmployee basePlusCommissionEmployee{
      "Bob", "Lewis", "444-44-4444", 5000, .04, 300};
  //? Staticly Done
  cout << "EMPLOYEES PROCESSED INDIVIDUALLY USING STATIC BINDING\n"
       << salariedEmployee.toString() << "\nearned $"
       << salariedEmployee.earnings() << "\n\n"
       << commissionEmployee.toString() << "\nearned $"
       << commissionEmployee.earnings() << "\n\n"
       << basePlusCommissionEmployee.toString() << "\nearned $"
       << basePlusCommissionEmployee.earnings() << "\n\n";
  //! Vectors are dynamic(At run time) --
  vector<Employee *> employees{&salariedEmployee, &commissionEmployee,
                               &basePlusCommissionEmployee};

  cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING\n\n";

  cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS POINTERS\n";
  //! Dynamicly Done
  for (const Employee *employeePtr : employees) {
    virtualViaPointer(employeePtr);
  }

  cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS REFERENCES\n";
  //! Dynamicly Done
  for (const Employee *employeePtr : employees) { //! Pointer
    virtualViaReference(*employeePtr);            //! Dereference(Object)
  }
}

void virtualViaPointer(
    const Employee *const baseClassPtr) { //! 2nd const for Pointer
  cout << baseClassPtr->toString() << "\nearned $" << baseClassPtr->earnings()
       << "\n\n";
}
//! Notice It's Employee Type (BasePlusCommissionEmployee is Also an Employee)
void virtualViaReference(const Employee &baseClassRef) {
  cout << baseClassRef.toString() << "\nearned $" << baseClassRef.earnings()
       << "\n\n";
}
